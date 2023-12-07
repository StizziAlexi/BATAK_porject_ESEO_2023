/*
 * PWM_Bargraphe.c
 *
 *  Created on: 29 nov. 2023
 *      Author: alexi
 */

#include <stdbool.h>
#include "stm32f1_timer.h"
#include "systick.h"
#include "stm32f1xx_hal.h"
#include "PWM_Bargraphe.h"

	static volatile uint32_t t = 0;
		void process_ms(void)
		{
			if(t)
				t--;
		}


void testbar(){
	TIMER_run_us(TIMER1_ID, 1000, 0);
	TIMER_enable_PWM(TIMER1_ID, TIM_CHANNEL_2, 500, 0, 0);
	TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 850);
	Systick_add_callback_function(&process_ms);
	t=30000;
	while (t){
			if (t==30000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 1000);
			}
			if (t==27000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 800);
			}
			if (t==24000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 700);
			}
			if (t==21000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 600);
			}
			if (t==18000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 500);
			}
			if (t==15000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 450);
			}
			if (t==12000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 420);
			}
			if (t==9000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 310);
			}
			if (t==6000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 220);
			}
			if (t==3000){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 100);
			}
			if (t==0){
				TIMER_set_duty(TIMER1_ID, TIM_CHANNEL_2, 0);
			}
	}
}
