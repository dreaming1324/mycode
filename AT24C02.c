#include <REGX52.H>
#include "I2C.h"


#define Write_AT24C02 0xA0
#define Read_AT24C02  0xA1


void AT24C02_WriteByte(unsigned char Word_Address,Data)//写入一个字节数据；
{
		I2C_Start();
	  I2C_SendByte(Write_AT24C02);//在总线上寻找AT24C02的写地址；
		I2C_ReceiveAck();
		I2C_SendByte(Word_Address); //在AT24C02中找到要写入字节的地址；
		I2C_ReceiveAck();       //此处可以接收到应答返回值0；
		I2C_SendByte(Data);     //在找到地址处写入数据；
		I2C_ReceiveAck();
		I2C_Stop();             //经过测试，写函数应答值都为0，没有错误；

}


unsigned char AT24C02_ReadByte(unsigned char Word_Address)//读取一个字节数据
{
		unsigned char Data;
		I2C_Start();
		I2C_SendByte(Write_AT24C02);
		I2C_ReceiveAck();
		I2C_SendByte(Word_Address); //在AT24C02中找到要读取字节的地址；
		I2C_ReceiveAck();  
		I2C_Start();
		I2C_SendByte(Read_AT24C02);
		I2C_ReceiveAck();
		Data=I2C_ReceiveByte();
		I2C_SendAck(1);          	//应答发送1表示读取结束；
		I2C_Stop();
		return Data;
}