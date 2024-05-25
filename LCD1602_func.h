#ifndef __LCD1602_FUNC_H__
#define __LCD1602_FUNC_H__

void LCD1602_Init(void);


void LCD1602_ShowChar(unsigned char Row,unsigned char Column,unsigned char Character);


void LCD1602_ShowString(unsigned char Row,unsigned char Column,unsigned char* String);


void LCD1602_ShowNum(unsigned char Row,unsigned char Column,unsigned int Num,unsigned char Size);


void LCD1602_ShowSignedNum(unsigned char Row,unsigned char Column,int Num,unsigned char Size);


void LCD1602_ShowBinNum(unsigned char Row,unsigned char Column,int Num,unsigned char Size);


void LCD1602_ShowHexNum(unsigned char Row,unsigned char Column,unsigned int Num,unsigned char Size);

#endif