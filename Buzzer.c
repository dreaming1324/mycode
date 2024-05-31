#include "stm32f10x.h"                  // Device header



void Buzzer_Init(void)
{
	//使能外设时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	//初始化输出端口PA
	GPIO_InitTypeDef GPIO_Initstructure;				
	GPIO_Initstructure.GPIO_Mode=GPIO_Mode_Out_PP;		//选择推挽输出模式；
	GPIO_Initstructure.GPIO_Pin=GPIO_Pin_0; //初始化PA0和PA1两个IO口；
	GPIO_Initstructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initstructure);				//选择输出频率位50MHZ；
	
	GPIO_SetBits(GPIOA,GPIO_Pin_0);			//将初始化后的电平置为默认高电平；
}
