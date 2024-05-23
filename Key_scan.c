#include <REGX52.H>
#include "Delay.h"


unsigned char Key_KeyNumber;

unsigned char Key(void)    //返回检测后的键码；
{	
		return Key_KeyNumber;
}

//unsigned char Key(void)//返回独立按键键码；
//{
//	unsigned char KeyNumber=0;
//	if(P3_1==0){Delay(20);while(P3_1==0);Delay(20);KeyNumber=1;}
//	if(P3_0==0){Delay(20);while(P3_0==0);Delay(20);KeyNumber=2;}
//	if(P3_2==0){Delay(20);while(P3_2==0);Delay(20);KeyNumber=3;}
//	if(P3_3==0){Delay(20);while(P3_3==0);Delay(20);KeyNumber=4;}
//	return KeyNumber;
//}

unsigned char Key_GetState(void)
{
		unsigned char KeyNumber=0;
	
		if(P3_1==0){KeyNumber=1;}
		if(P3_0==0){KeyNumber=2;}
		if(P3_2==0){KeyNumber=3;}
		if(P3_3==0){KeyNumber=4;}
		
		return KeyNumber;
}


void Key_Loop(void)
{
		static unsigned char NowState,LastState;   //两个变量记录现态和次态，通过前后两个状态来判断按键情况；
		LastState=NowState;
		NowState=Key_GetState();
				Key_KeyNumber=0;							 //把标志位清0；
		if((NowState==1)&&(LastState==0))  //秒表计时器应该检测按下的下降沿；
				Key_KeyNumber=1;
		if((NowState==0)&&(LastState==2))		//其余只检测松手的上升沿；
				Key_KeyNumber=2;
		if((NowState==0)&&(LastState==3))
				Key_KeyNumber=3;
		if((NowState==0)&&(LastState==4))  
				Key_KeyNumber=4;
}


