#include <REGX52.H>
#include "LCD1602_func.h"
#include "Delay.h"
#include "IR.h"


typedef unsigned char u8;
typedef unsigned int u16;

u8 Num;
u8 Address,Command;

void main()
{
		LCD1602_Init();
		//Int0_Init();
		//Timer0_Init();  //定时器不触发中断，只计时；
		//Timer0_Run(1);//启动定时器；
		//Delay(11);
		//Num=Timer0_GetCounter();   //获取当前计时器的时间；
		//LCD1602_ShowNum(1,1,Num,5);
		LCD1602_ShowString(1,1,"ADDR CMD  NUM");
		LCD1602_ShowString(2,1,"0x00 0x00 000");
		IR_Init();
		while(1)
		{
				if(IR_GetDataFlag()||IR_GetRepeatFlag())
				{
						Address=IR_GetAddress();
						Command=IR_GetCommand();
						LCD1602_ShowHexNum(2,1,Address,2);
						LCD1602_ShowHexNum(2,6,Command,2);
				
						if(Command==IR_VOLSUB)
						{
								Num--;
						}
						if(Command==IR_VOLADD)
						{
								Num++;
						}
						LCD1602_ShowNum(2,11,Num,3);
			}
		}
}


//void Int0_Routine(void) interrupt 0  //红外信号检测外部中断；
//{
//		Num++;
//}