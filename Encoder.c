#include "stm32f10x.h"                  // Device header
#include "Delay.h"


int Num=0;


int Return_Num(void)
{
	int Tmp=0;
	Tmp=Num;
	Num=0;
	return Tmp;
}


void Encoder_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
	
	GPIO_InitTypeDef GPIO_Initstructure;				
	GPIO_Initstructure.GPIO_Mode=GPIO_Mode_IPU;		
	GPIO_Initstructure.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1; 
	GPIO_Initstructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Initstructure);
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_Pin_0);  //AFIO选择PA5接入中断控制区
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_Pin_1);
	
	EXTI_InitTypeDef EXTI_Initstructure;
	EXTI_Initstructure.EXTI_Line=EXTI_Line0|EXTI_Line1;				//中断控制区选择EXTI_Line5接入NVIC
	EXTI_Initstructure.EXTI_LineCmd=ENABLE;
	EXTI_Initstructure.EXTI_Mode=EXTI_Mode_Interrupt;		//中断模式
	EXTI_Initstructure.EXTI_Trigger=EXTI_Trigger_Falling;	//下降沿触发

	EXTI_Init(&EXTI_Initstructure);
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);  //设置抢占优先级和响应优先级的分组
	NVIC_InitTypeDef NVIC_Initstructure;
	
	NVIC_Initstructure.NVIC_IRQChannel=EXTI0_IRQn; //选择中断通道与NVIC连接的通道
	NVIC_Initstructure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Initstructure.NVIC_IRQChannelPreemptionPriority=1;//配置PA0优先级
	NVIC_Initstructure.NVIC_IRQChannelSubPriority=1;
	NVIC_Init(&NVIC_Initstructure);
	
	NVIC_Initstructure.NVIC_IRQChannel=EXTI1_IRQn; //选择中断通道与NVIC连接的通道
	NVIC_Initstructure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Initstructure.NVIC_IRQChannelPreemptionPriority=1;//配置PA1优先级
	NVIC_Initstructure.NVIC_IRQChannelSubPriority=2;
	NVIC_Init(&NVIC_Initstructure);
	
	EXTI_ClearITPendingBit(EXTI_Line0);
    EXTI_ClearITPendingBit(EXTI_Line1);
}


void EXTI0_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line0)==SET)
	{
		if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0)
		{
			Delay_ms(1);
			Num--;
		}
		
		EXTI_ClearITPendingBit(EXTI_Line0);
	}
}


void EXTI1_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line1)==SET)
	{
		Delay_ms(1);
		if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==0)
		{
			Num++;
		}
	
		EXTI_ClearITPendingBit(EXTI_Line1);
	}
}
