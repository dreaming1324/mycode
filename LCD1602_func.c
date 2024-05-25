#include <REGX52.H>
#include "Delay.h"



sbit LCD_WR=P2^5;
sbit LCD_RS=P2^6;
sbit LCD_EN=P2^7;

#define LCD_DATAPORT P0


const unsigned char code HexLetter[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0'};
//定义16进制字符表；

void LCD_WriteCommand(unsigned char Command)
{
		LCD_RS=0;
		LCD_WR=0;
		LCD_DATAPORT=Command;
		Delay(2);
		LCD_EN=1;
		Delay(2);
		LCD_EN=0;
}

void LCD_WriteData(unsigned char Data)
{
		LCD_RS=1;
		LCD_WR=0;
		LCD_DATAPORT=Data;
		Delay(2);
		LCD_EN=1;
		Delay(2);
		LCD_EN=0;
}


void LCD1602_Init(void)
{
		LCD_WriteCommand(0x38);
		LCD_WriteCommand(0x0C);
		LCD_WriteCommand(0x06);
		LCD_WriteCommand(0x01);
}


void LCD1602_ShowChar(unsigned char Row,unsigned char Column,unsigned char Character)
{
		LCD_WriteCommand(0x80|((Row-1)*(0x40)+Column-1));
		LCD_WriteData(Character);
}


void LCD1602_ShowString(unsigned char Row,unsigned char Column,unsigned char* String)
{
		while(*String)
		{
				LCD1602_ShowChar(Row,Column,*String);
				String++;
				Column++;
		}
}	


void LCD1602_ShowNum(unsigned char Row,unsigned char Column,unsigned int Num,unsigned char Size)
{
		while(Size--)
		{
				LCD1602_ShowChar(Row,Column+Size,(Num%10)+'0');
				Num/=10;
		}
}

void LCD1602_ShowSignedNum(unsigned char Row,unsigned char Column,int Num,unsigned char Size)
{
				if(Num<0)
				{
						Num=-Num;
						LCD1602_ShowChar(Row,Column,'-');
				}
				else
				{
						LCD1602_ShowChar(Row,Column,'+');
				}
				LCD1602_ShowNum(Row,Column+1,Num,Size);
}


void LCD1602_ShowBinNum(unsigned char Row,unsigned char Column,unsigned int Num,unsigned char Size)
{
		while(Size--)
		{
				LCD1602_ShowChar(Row,Column+Size,(Num%2)+'0');
				Num/=2;
		}
}


void LCD1602_ShowHexNum(unsigned char Row,unsigned char Column,unsigned int Num,unsigned char Size)
{
		LCD1602_ShowString(Row,Column,"0x");
		while(Size--)
		{
				LCD1602_ShowChar(Row,Column+Size+2,HexLetter[Num%16]);
				Num/=16;
		}
}
