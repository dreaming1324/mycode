#include "stm32f10x.h"                  // Device header
#include "SPI_Software.h"
#include "W25Q64_COMMAND.h"



void W25Q64_Init(void)
{
	SPI_Software_Init();
}


void W25Q64_GetID(uint8_t* MID,uint16_t* DID)
{
	uint8_t IDH=0;
	uint8_t IDL=0;
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_ID);		//交换发送读取ID指令0x9F
	*MID=SPI_Software_SwapByte(W25Q64_Dummy_Byte);
	IDH=SPI_Software_SwapByte(W25Q64_Dummy_Byte);
	IDL=SPI_Software_SwapByte(W25Q64_Dummy_Byte);
	SPI_SendEnd();
	*DID=(IDH<<8)|IDL;
}

void W25Q64_WriteEnable(void)
{
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_Write_Enable);
	SPI_SendEnd();
}


void W25Q64_WaitBusy(void)
{
	uint32_t Count=10000;
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_Read_StatusRegister1);
	while(SPI_Software_SwapByte(W25Q64_Dummy_Byte)&0x01)
	{
		Count--;
		if(Count==0)
			break;
	}
	SPI_SendEnd();
}


void W25Q64_PageProgram(uint32_t Addr,uint8_t* Array,uint16_t Size)
{
	W25Q64_WriteEnable();			//每次写操作之前都需要进行写使能；
	uint16_t i=0;
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_Page_Program);
	SPI_Software_SwapByte((Addr>>16)%256);		//分三个字节发送24位地址，高位先行；
	SPI_Software_SwapByte((Addr>>8)%256);
	SPI_Software_SwapByte(Addr%256);
	for(i=0;i<Size;i++)
	{
		SPI_Software_SwapByte(Array[i]);
	}
	SPI_SendEnd();
	W25Q64_WaitBusy();
}


void W25Q64_Erase_Sector(uint32_t Addr)
{
	W25Q64_WriteEnable();
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_Sector_Erase_4KB);
	SPI_Software_SwapByte((Addr>>16)%256);
	SPI_Software_SwapByte((Addr>>8)%256);
	SPI_Software_SwapByte(Addr%256);			//删除指定地址所在扇区的所有数据；
	SPI_SendEnd();
	W25Q64_WaitBusy();
}


void W25Q64_ReadData(uint32_t Addr,uint8_t* Array,uint32_t Num)
{
	uint32_t i=0;
	SPI_SendStart();
	SPI_Software_SwapByte(W25Q64_Read_Data);
	SPI_Software_SwapByte((Addr>>16)%256);
	SPI_Software_SwapByte((Addr>>8)%256);
	SPI_Software_SwapByte(Addr%256);
	for(i=0;i<Num;i++)
	{
		Array[i]=SPI_Software_SwapByte(W25Q64_Dummy_Byte);
	}
	SPI_SendEnd();
}

