#include "stm32f10x.h"
#include "led.h"
#define uint unsigned int
uint i,j;
void delay()
{
	for(i = 100;i>0;i--)
		for(j = 11000;j>0;j--);
}

int main(void)
{
	 LED_GPIO_Congig();
	while(1)
	{

		LED(OFF)
	 delay();

		LED(ON)
	 delay();
	}
	
}




