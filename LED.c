#include "stm32f10x.h"                  // Device header



void LED_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_Initstructure2;				
	GPIO_Initstructure2.GPIO_Mode=GPIO_Mode_Out_PP;		
	GPIO_Initstructure2.GPIO_Pin=GPIO_Pin_0; 
	GPIO_Initstructure2.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initstructure2);				
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_0);			
}
