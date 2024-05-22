#include <REGX52.H>




sbit I2C_SCL=P2^1;
sbit I2C_SDA=P2^0;


void I2C_Start(void)
{
		I2C_SDA=1;
		I2C_SCL=1;  //置1操作顺序交换容易导致变成结束标志，即在SCL为1时检测到SDA由0变1；
		I2C_SDA=0;
		I2C_SCL=0;
}


void I2C_Stop(void)
{
		I2C_SDA=0;
		I2C_SCL=1;
		I2C_SDA=1;
}


void I2C_SendByte(unsigned char Byte)
{
		unsigned char i=0;
		for(i=0;i<8;i++)
		{
				I2C_SDA=Byte&(0x80>>i);//从高位开始发送；
				I2C_SCL=1;
				I2C_SCL=0;
		}
}


unsigned char I2C_ReceiveByte(void)
{
		unsigned char TMP=0x00;
		unsigned char i=0;
		I2C_SDA=1;  //单片机释放SDA控制，让子机控制总线电平变化；
		for(i=0;i<8;i++)
		{
				I2C_SCL=1;
				if(I2C_SDA)
				TMP|=(0x80>>i);
				I2C_SCL=0;
		}
		return TMP;
}


void I2C_SendAck(unsigned char AckBit)	//单片机(主机)发送应答；
{																				//0为应答，1为非应答；
		I2C_SDA=AckBit;
		I2C_SCL=1;
		I2C_SCL=0;
}


unsigned char I2C_ReceiveAck(void)					//单片机（主机）接收应答；			
{
		unsigned char TMP=0x00;
		I2C_SDA=1;
		I2C_SCL=1;
		TMP|=I2C_SDA;
		I2C_SCL=0;
		return TMP;
}