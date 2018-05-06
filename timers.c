/*
 * LCD3 firmware
 *
 * Copyright (C) Casainho, 2018.
 *
 * Released under the GPL License, Version 3
 */

#include "stm8s.h"
#include "stm8s_tim2.h"

void timer2_init (void)
{
//  uint16_t ui16_i;
//
//  // TIM2 Peripheral Configuration
//  TIM2_DeInit();
//  TIM2_TimeBaseInit(TIM2_PRESCALER_128, 0xffff); // each incremment at every 8us
//  TIM2_Cmd(ENABLE); // TIM2 counter enable
//
//  // IMPORTANT: this software delay is needed so timer2 work after this
//  for(ui16_i = 0; ui16_i < (29000); ui16_i++) { ; }




  uint16_t ui16_i;

  // TIM2 Peripheral Configuration
  TIM2_DeInit();
  TIM2_TimeBaseInit(TIM2_PRESCALER_16384, 0xffff); // each incremment at every ~1ms
  TIM2_Cmd(ENABLE); // TIM2 counter enable

  // IMPORTANT: this software delay is needed so timer2 work after this
  for(ui16_i = 0; ui16_i < (29000); ui16_i++) { ; }
}

void delay_8us (uint16_t us8)
{
  uint16_t ui16_counter;
//
//  ui16_counter = TIM2_GetCounter () + us8;
//  while (TIM2_GetCounter () < ui16_counter) ; // wait here until time passes

  ui16_counter = TIM2_GetCounter () + 1000;
  while (TIM2_GetCounter () < ui16_counter) ; // delay ~10ms
}
