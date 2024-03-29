#include "stm32f10x.h"

#define LED GPIO_Pin_0

void LED_Init()
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&GPIO_InitStructure);
    GPIO_ResetBits(GPIOA,LED);
}

void LED_TurnOn()
{
    GPIO_SetBits(GPIOA,LED);
}

void LED_TurnOff()
{
    GPIO_ResetBits(GPIOA,LED);
}

/**
 * @Author: Yang Lixin
 * @description: 高低电平反转
 * @return {*}
 */
void LED_Reversal()
{
    uint16_t state = 0;
    state = GPIO_ReadOutputDataBit(GPIOA,LED);
    if(state == 0)
    {
         GPIO_SetBits(GPIOA,LED);
    }
    else
    {
        GPIO_ResetBits(GPIOA,LED);
    }
   
}
