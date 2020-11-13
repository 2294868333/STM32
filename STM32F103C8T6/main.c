#include "stm32f10x.h"
#define uchar  unsigned char
#define uint   unsigned int
uint i,j;
void delay()
{
	for(i = 100;i>0;i--)
			for(j = 1100; j>0;j--);
}
	
int main()
{
	//设置APB2外设时钟使能寄存器使能
	RCC_APB2ENR |= (1<<4);
	//端口配置高寄存器
	GPIOC->CRH |= (1<<(4*5));
	//端口输出数据寄存器
	while(1)
	{
	GPIOC->ODR &= ~(1<<13);
	delay();
	GPIOC->ODR |= (1<<13);
	delay();
	}
}

void SystemInit(void)
{
	
}
	