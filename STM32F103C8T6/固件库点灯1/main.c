#include "stm32f10x.h"
//#include "led.h"
#define uint unsigned int
	uint i,j;
void delay()
{
	for(i = 100;i>0;i--)
		for(j = 11000;j>0;j--);
}

int main(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOC, &GPIO_InitStruct);
	
	while(1)
	{
	 GPIO_SetBits(GPIOC,GPIO_Pin_13);
	 delay();
	 GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	 delay();
	}
}




