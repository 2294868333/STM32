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
	//����APB2����ʱ��ʹ�ܼĴ���ʹ��
	RCC_APB2ENR |= (1<<4);
	//�˿����ø߼Ĵ���
	GPIOC->CRH |= (1<<(4*5));
	//�˿�������ݼĴ���
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
	