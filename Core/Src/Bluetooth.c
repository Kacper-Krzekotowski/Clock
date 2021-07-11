/*
 * Bluetooth.c
 *
 *  Created on: Mar 14, 2021
 *      Author: Kacper
 */


#include "gpio.h"
#include "main.h"
#include "Clock.h"
#include "stm32f1xx_hal.h"
#include  "rtc.h"
#include "Bluetooth.h"

uint8_t ascii_to_int(char znak){
    return (uint8_t)(znak - '0');
}

RTC_TimeTypeDef  TIM_SET = {0};


void COMAND_MEN(uint8_t tablica[8]){
	if(tablica[0]== 99 && tablica[1] == 109 && tablica[2] == 100){
		if(tablica[3] == 48){
			uint8_t HH = 0, hh = 0 , MM = 0, mm = 0 ;

		HH	= ascii_to_int(tablica[4]);
		hh	= ascii_to_int(tablica[5]);
		MM	= ascii_to_int(tablica[6]);
		mm	= ascii_to_int(tablica[7]);

			TIM_SET.Hours = HH *10 + hh;
			TIM_SET.Minutes = MM*10 + mm;

			HAL_RTC_SetTime(&hrtc,&TIM_SET,FORMAT_BIN);
			tablica[0]= 0;
		}
		else if (tablica[3]== 49) {
			brightnes= 10 * ascii_to_int(tablica[4]);
			brightnes += ascii_to_int(tablica[5]);
			if(brightnes== 0)brightnes =1;
		}






	}



}
