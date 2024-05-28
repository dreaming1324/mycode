#include <REGX52.H>
#include "Int0.h"
#include "Timer0.h"
#include "LCD1602_func.h"


typedef unsigned char u8;
typedef unsigned int u16;

u16 IR_Time;
u8 IR_State;

u8 IR_Data[4];
u8 IR_DataPtr;

u8 IR_DataFlag;
u8 IR_RepeatFlag;
u8 IR_Address;
u8 IR_Command;


void IR_Init(void)
{
		Timer0_Init(); 
		Int0_Init();
	
}


u8 IR_GetDataFlag(void)
{
		if(IR_DataFlag)
		{
				IR_DataFlag=0;
				return 1;
		}
		return 0;
}

u8 IR_GetAddress(void)
{
		return IR_Address;
}


u8 IR_GetCommand(void)
{
		return IR_Command;
}


u8 IR_GetRepeatFlag(void)
{
		if(IR_RepeatFlag)
		{
				IR_RepeatFlag=0;
				return 1;
		}
		return 0;
}



void IR_Routine() interrupt 0
{
		if(IR_State==0)   //如果是空闲状态0；
		{
				Timer0_SetCounter(0);
				Timer0_Run(1);
				IR_State=1;   //进入预start状态1；
				//LCD1602_ShowNum(2,1,Timer0_GetCounter(),5);
		}
		else if(IR_State==1)
		{
				
				IR_Time=Timer0_GetCounter();
				Timer0_SetCounter(0);
				//LCD1602_ShowNum(1,1,IR_Time,5);
				if((IR_Time>=12400-500)&&(IR_Time<=12400+500))  //start两个下降沿时间距离如果在这个范围内；
				{
					
						IR_State=2;  //进入读取数据状态2；
						
				}
				else if((IR_Time>=10370-500)&&(IR_Time<=10370+500))  //进入重复发送数据
				{
						IR_RepeatFlag=1;
						Timer0_Run(0);
						IR_State=0;
				}
				else
				{
					IR_State=1;
				}
		}

		else if(IR_State==2)
		{
				IR_Time=Timer0_GetCounter();
				Timer0_SetCounter(0);
				if((IR_Time>=1030-500)&&(IR_Time<=1030+500))
				{
						IR_Data[IR_DataPtr/8]&=~(0x01<<(IR_DataPtr%8));//IR_DataPtr/8用来选择数组中的某一个数，IR_DataPtr%8用来选择某个数具体的一位bit;
						IR_DataPtr++;
				}
				else if((IR_Time>=2070-500)&&(IR_Time<=2070+500))
				{
						IR_Data[IR_DataPtr/8]|=(0x01<<(IR_DataPtr%8));
						IR_DataPtr++;
				}
				else 
				{
						IR_State=1;
						IR_DataPtr=0;
				}
				
				if(IR_DataPtr>=32)
				{
						IR_DataPtr=0;
						if((IR_Data[0]==~IR_Data[1])&&(IR_Data[2]==~IR_Data[3]))
						{
								IR_DataFlag=1;
								IR_Address=IR_Data[0];
								IR_Command=IR_Data[2];
						}
						Timer0_Run(0);
						IR_State=0;
				}
		}
}
