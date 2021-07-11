/*
 * EFFECTS.c
 *
 *  Created on: Mar 14, 2021
 *      Author: Kacper
 */

#include "sk6812.h"



void EFECT1 (uint8_t b){
	uint8_t i = 0;
static	uint8_t opt = 0;
if(b == 0)return;
	switch(opt){

	case(0):
		for(i=0 ; i<113 ; i++){
led_set_RGB(i, 128/b, 0/b, 56/b);
i++;
led_set_RGB(i, 56/b, 128/b,0/b);
i++;
led_set_RGB(i, 0/b, 56/b, 128/b);
}
opt++;

break;
	case(1):
		for(i=0 ; i<113 ; i++){
		led_set_RGB(i, 0/b, 56/b, 128/b);
		i++;
		led_set_RGB(i, 128/b, 0/b, 56/b);
		i++;
		led_set_RGB(i, 56/b, 128/b,0/b);

		}
opt++;
break;
	case(2):
		for(i=0 ; i<113 ; i++){
			led_set_RGB(i, 56/b, 128/b,0/b);
			i++;
			led_set_RGB(i, 0/b, 56/b, 128/b);
			i++;
			led_set_RGB(i, 128/b, 0/b, 56/b);
			opt=0;
		}
break;
	}
}


void EFFECT2(uint8_t b){
	uint8_t i = 0 ;
static	uint8_t opt = 0 ;
	switch(opt){


	case(0):
	for(i=0 ; i<113 ;i++){
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
	}

i=0;
opt++;
break;
	case(1):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
	}
i=0;
opt++;
break;

	case(2):
	for(i=0 ; i<113 ;i++){


led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;

	}
i=0;
opt++;
break;


	case(3):
	for(i=0 ; i<113 ;i++){



led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;

	}
i=0;
opt++;
break;


	case(4):
	for(i=0 ; i<113 ;i++){


led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;

	}
i=0;
opt++;
break;

	case(5):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
	}
i=0;
opt++;
break;

	case(6):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
	}
i=0;
opt++;
break;

	case(7):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
	}
i=0;
opt++;
break;

	case(8):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
	}
i=0;
opt++;
break;

	case(9):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,128/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
	}
i=0;
opt++;
break;

	case(10):
	for(i=0 ; i<113 ;i++){

led_set_RGB(i,255/b, 0/b, 255/b);
i++;
led_set_RGB(i,255/b, 0/b, 128/b);
i++;
led_set_RGB(i,255/b, 0/b, 0/b);
i++;
led_set_RGB(i,255/b, 128/b, 0/b);
i++;
led_set_RGB(i,255/b, 255/b, 0/b);
i++;
led_set_RGB(i,128/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 0/b);
i++;
led_set_RGB(i,0/b, 255/b, 128/b);
i++;
led_set_RGB(i,0/b, 255/b, 255/b);
i++;
led_set_RGB(i,0/b, 128/b, 255/b);
i++;
led_set_RGB(i,0/b, 0/b, 255/b);
i++;
led_set_RGB(i,128/b, 0/b, 255/b);
i++;
	}
i=0;
opt++;
break;

	case(11):
	for(i=0 ; i<113 ;i++){


		led_set_RGB(i,255/b, 0/b, 128/b);
		i++;
		led_set_RGB(i,255/b, 0/b, 0/b);
		i++;
		led_set_RGB(i,255/b, 128/b, 0/b);
		i++;
		led_set_RGB(i,255/b, 255/b, 0/b);
		i++;
		led_set_RGB(i,128/b, 255/b, 0/b);
		i++;
		led_set_RGB(i,0/b, 255/b, 0/b);
		i++;
		led_set_RGB(i,0/b, 255/b, 128/b);
		i++;
		led_set_RGB(i,0/b, 255/b, 255/b);
		i++;
		led_set_RGB(i,0/b, 128/b, 255/b);
		i++;
		led_set_RGB(i,0/b, 0/b, 255/b);
		i++;
		led_set_RGB(i,128/b, 0/b, 255/b);
		i++;
		led_set_RGB(i,255/b, 0/b, 255/b);
		i++;

	}
opt=0;
break;
	}
}


void EFFECT3 (uint8_t br){
static uint32_t	Nexst_coulor = 0x88FF34;
static uint32_t	last_coulor = 0xFF00FF;
	   uint8_t	i;
static uint8_t	licznik = 0;
	   uint8_t cnt = 0;
uint8_t r = last_coulor >>4 , g = last_coulor >> 2 , b = last_coulor;
	led_set_all_RGB(r/br, g/br, b/br);
	cnt = licznik ;
	while(cnt != 0){
		r = Nexst_coulor >> 4 ;
		g = Nexst_coulor >> 2 ;
		b = Nexst_coulor	  ;
		led_set_RGB(i, r/br, g/br, b/br);
		i++;
		cnt --;
	}
	licznik ++;
	if(licznik > 112) licznik=0;
}





