#include "stm32f10x.h"                  // Device header

#define SPI_CS      GPIO_Pin_4
#define SPI_SCLK    GPIO_Pin_5
#define SPI_MISO	GPIO_Pin_6
#define SPI_MOSI	GPIO_Pin_7


void SPI_SetCS(uint8_t StateBit)
{
	GPIO_WriteBit(GPIOA,SPI_CS,(BitAction)StateBit);
}


void SPI_SetSCLK(uint8_t StateBit)
{
	GPIO_WriteBit(GPIOA,SPI_SCLK,(BitAction)StateBit);
}


void SPI_SetMOSI(uint8_t StateBit)
{
	GPIO_WriteBit(GPIOA,SPI_MOSI,(BitAction)StateBit);
}


uint8_t SPI_ReadMISO(void)
{
	return GPIO_ReadInputDataBit(GPIOA,SPI_MISO);
}


void SPI_Software_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	GPIO_InitTypeDef GPIO_Initstructure;				
	GPIO_Initstructure.GPIO_Mode=GPIO_Mode_Out_PP;		//选择推挽输出模式；
	GPIO_Initstructure.GPIO_Pin=GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_7; 			
	GPIO_Initstructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initstructure);				//选择输出频率位50MHZ；
	
	GPIO_Initstructure.GPIO_Mode=GPIO_Mode_IPU;		
	GPIO_Initstructure.GPIO_Pin=GPIO_Pin_6; 			
	GPIO_Initstructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initstructure);				//选择输出频率位50MHZ；
	
	SPI_SetCS(1);			
	SPI_SetSCLK(0);
}


void SPI_SendStart(void)
{
	SPI_SetCS(0);
}


void SPI_SendEnd(void)
{
	SPI_SetCS(1);
}


//uint8_t SPI_Software_SwapByte(uint8_t ByteSend)
//{
//	uint8_t i = 0;
//	uint8_t ByteReceived=0x00;
//	for(i=0;i<8;i++)
//	{
//		SPI_SetMOSI(ByteSend&(0x80>>i));//使用掩码提取每一位数据
//		SPI_SetSCLK(1);
//		if(SPI_SetMISO())
//		ByteReceived|=(0x80>>i);
//		SPI_SetSCLK(0);
//	}
//	
//	return ByteReceived;
//}


uint8_t SPI_Software_SwapByte(uint8_t ByteSend)
{
	uint8_t i = 0;
	for(i=0;i<8;i++)
	{
		SPI_SetMOSI(ByteSend&0x80);
		ByteSend<<=1;
		SPI_SetSCLK(1);
		if(SPI_ReadMISO())
			ByteSend|=0x01;
		SPI_SetSCLK(0);
	}
	return ByteSend;
}

