#include <REGX52.H>
#include "Timer0.h"
#include "Key.h"
#include "NixieTube.h"
#include "Delay.h"
#include "AT24C02.h"


unsigned char KeyNum,Minute,Second,MilliSec,MODE;

void main()
{
		Timer0_Init();
		while(1)
		{
				KeyNum=Key();
				if(KeyNum==1)
				{
						MODE=!MODE;
				}
				
				if(KeyNum==2)
				{
						Minute=0;
						Second=0;
						MilliSec=0;
				}
				
				if(KeyNum==3)
				{
						AT24C02_WriteByte(0x10,Minute);
						Delay(5);
						AT24C02_WriteByte(0x11,Second);
						Delay(5);
						AT24C02_WriteByte(0x12,MilliSec);
						Delay(5);
				}     //将数据保存在EEPROM中
				
				if(KeyNum==4)
				{
						Minute=AT24C02_ReadByte(0x10);
						Second=AT24C02_ReadByte(0x11);
						MilliSec=AT24C02_ReadByte(0x12);
				}    //从EEPROM中把数据读出来
		
				Nixie_SetBuffer(1,Minute/10);
				Nixie_SetBuffer(2,Minute%10);
				Nixie_SetBuffer(3,11);
				Nixie_SetBuffer(4,Second/10);     //两个数码管分别表示数字的个位和十位；
				Nixie_SetBuffer(5,Second%10);
				Nixie_SetBuffer(6,11);
				Nixie_SetBuffer(7,MilliSec/10);
				Nixie_SetBuffer(8,MilliSec%10);	  //定时器扫描按键和数码管不会因为循环而使得后续程序不工作；
		}
}


void Time_Clock(void)
{
	if(MODE==1)				//检测是否按下暂停
	{
			MilliSec++;
			if(MilliSec>=100)
			{
					MilliSec=0;
					Second++;
					if(Second>=60)
					{
							Second=0;
							Minute++;
							if(Minute>=60)
							{
									Minute=0;
							}  //时间进位换算；
					}
			}
	}
}

void Timer0_Routine() interrupt 1
{	
		static unsigned int T0count1,T0count2,T0count3;
		TH0=0xFC;//分别给高低8位赋值；
		TL0=0x66;//
		if(T0count1>=20)
		{
				T0count1=0;
				Key_Loop();   	//单片机每20ms中断检测一次按键状态，
		}
				T0count2++;
		if(T0count2>=2)
		{
				T0count2=0;
				Nixie_Loop();   //单片机每2ms中断扫描一次数码管；
		}
		T0count3++;
		if(T0count3>=10)
		{
				T0count3=0;
				Time_Clock();   //单片机每10ms进入计时函数计时一次，计时100次为一秒；
		}
		T0count1++;
}