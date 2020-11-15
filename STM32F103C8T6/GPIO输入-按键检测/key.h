#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"

#define KEY_GPIO_PIN         GPIO_Pin_13
#define KEY_GPIO_PORT        GPIOC
#define KEY_GPIO_CLK         RCC_APB2Periph_GPIOC

#define KEY_ON	 1
#define KEY_OFF	 0
 
void Key_GPIO_Config(void);
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);

#endif /*  __KEY_H  */

