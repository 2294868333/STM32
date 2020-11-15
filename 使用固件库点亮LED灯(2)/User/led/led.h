#ifndef __LDE_H
#define __LDE_H

#include "stm32f10x.h"

#define LED_G_GPIO_PIN         GPIO_Pin_13
#define LED_G_GPIO_PORT        GPIOC
#define LED_G_GPIO_CLK         RCC_APB2Periph_GPIOC

#define OFF       0
#define ON        1

#define  LED(a)      if(a)  GPIO_ResetBits(LED_G_GPIO_PORT ,LED_G_GPIO_PIN);  else  GPIO_SetBits(LED_G_GPIO_PORT ,LED_G_GPIO_PIN); //Ãð
void LED_GPIO_Congig(void);

#endif
