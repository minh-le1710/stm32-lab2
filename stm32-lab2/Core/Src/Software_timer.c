/*
 * software_timer.c
 *
 *  Created on: Oct 30, 2024
 *      Author: minhkind1710
 */


#include "Software_timer.h"


int TICK = 10;

int timer_flag0 = 0;
int timer_counter0 = 0;

int timer_flag1 = 0;
int timer_counter1 = 0;

int timer_flag2 = 0;
int timer_counter2 = 0;

void setTimer0(int duration){
	timer_flag0 = 0;
	timer_counter0 = duration / TICK;
}

void setTimer1(int duration){
	timer_flag1 = 0;
	timer_counter1 = duration / TICK;
}

void setTimer2(int duration){
	timer_flag2 = 0;
	timer_counter2 = duration / TICK;
}

void timerRun(){
		if(timer_counter0 > 0){
			timer_counter0--;
		if(timer_counter0 <= 0){
			timer_flag0 = 1;
			}
		}

		if(timer_counter1 > 0){
			timer_counter1--;
		if(timer_counter1 <= 0){
			timer_flag1 = 1;
			}
		}

		if(timer_counter2 > 0){
			timer_counter2--;
		if(timer_counter2 <= 0){
			timer_flag2 = 1;
			}
		}
}
