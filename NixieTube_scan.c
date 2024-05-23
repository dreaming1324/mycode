#include <REGX52.H>
#include "Delay.h"

unsigned char Nixie_Buffer[9]={0,10,10,10,10,10,10,10,10};//初始化为8个数码管都不显示；

unsigned char Nixietable[12]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x00,0x40};//穷举制作数码管数字显示表；最后一位表示不显示


void Nixie_SetBuffer(unsigned char Location,Num)      //用函数来控制Buffer里要显示的数字；
{
		Nixie_Buffer[Location]=Num;
}


void Nixie_ShowNum(unsigned char Location,Num)
{
		switch(Location)
		{
			case 1:P2_2=1;P2_3=1;P2_4=1;
			break;
			case 2:P2_2=0;P2_3=1;P2_4=1;
			break;
			case 3:P2_2=1;P2_3=0;P2_4=1;
			break;
			case 4:P2_2=0;P2_3=0;P2_4=1;
			break;
			case 5:P2_2=1;P2_3=1;P2_4=0;
			break;
			case 6:P2_2=0;P2_3=1;P2_4=0;
			break;
			case 7:P2_2=1;P2_3=0;P2_4=0;
			break;
			case 8:P2_2=0;P2_3=0;P2_4=0;
			break;
		}//138译码器位选8个数码管中的一个；
		
		P0=Nixietable[Num];//段选某几个LED组成数字；
//		Delay(1);//延迟一毫秒让数据完整显示；
//		P0=0;//把数码管清0；防止串位；
}


void Nixie_Loop(void)
{
		static unsigned char i=1;
		Nixie_ShowNum(i,Nixie_Buffer[i]);
		i++;
		if(i>=9)
			i=1;
}																	//定时器定时扫描8个数码管；