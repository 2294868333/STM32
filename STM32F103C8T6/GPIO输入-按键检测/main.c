#include "stm32f10x.h"
#include "led.h"
#include "key.h"
#define uint unsigned int
uint i,j;
void delay()
{
	for(i = 100;i>0;i--)
		for(j = 11000;j>0;j--);
}

int main(void)
{
	 KEY_GPIO_Congig();
	 LED_GPIO_Congig();
	while(1)                            
	{	   
		if( Key_Scan(KEY_GPIO_PORT,KEY_GPIO_PIN) == KEY_ON  )
		{
			/*LED·´×ª*/
			LED_TOGGLE;
		} 	
	}
}






