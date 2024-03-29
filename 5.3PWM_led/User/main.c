/*
 * @Author: Yang Lixin
 * @Date: 2023-02-06 19:06:39
 * @LastEditors: [you name]
 * @LastEditTime: 2023-02-07 09:53:08
 * @Description: 
 */

#include "stm32f10x.h"                  // Device header
#include "PWM.h"
#include "OLED.h"
#include "Delay.h"

int main(void)
{
	OLED_Init();
	PWM_TIM2Init();

	while (1)
	{
		PWM_Set(30);
	}
}
