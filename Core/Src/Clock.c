/*
 * Clock.c
 *
 *  Created on: Mar 12, 2021
 *      Author: Kacper
 */

#ifndef SRC_CLOCK_C_
#define SRC_CLOCK_C_

#include "stm32f1xx_hal.h"
#include "sk6812.h"
#include  "Clock.h"
#include "rtc.h"

#define MATRIX0 -1
#define MATRIX1 27
#define MATRIX2 2*28 -1
#define MATRIX3 3*28 - 1

RTC_TimeTypeDef TIME_FOR_CLOCK = {0,0,0} ;
RTC_DateTypeDef DATE_FOR_CLOCK = {0,0,0} ;




void Clock_TIME_PRINT(void){


HAL_RTC_GetTime(&hrtc,&TIME_FOR_CLOCK, FORMAT_BCD);

send_number_4_MATRIX(1,TIME_FOR_CLOCK.Hours>>4);
send_number_4_MATRIX(2,TIME_FOR_CLOCK.Hours & 15);
send_number_4_MATRIX(3,TIME_FOR_CLOCK.Minutes >> 4);
send_number_4_MATRIX(4,TIME_FOR_CLOCK.Minutes & 15);
}







void send_number_4_MATRIX (uint8_t n_of_matrix,uint8_t number){




switch(n_of_matrix){
case(1):

						switch(number){
						case(0):
						led_set_RGB(25+MATRIX0, 0, 0, 0);
						led_set_RGB(26+MATRIX0, 0, 0, 0);
						led_set_RGB(27+MATRIX0, 0, 0, 0);
						led_set_RGB(28+MATRIX0, 0, 0, 0);
						break;
						case(1):
						led_set_RGB(1+MATRIX0,0,0,0);
						led_set_RGB(2+MATRIX0,0,0,0);
						led_set_RGB(3+MATRIX0,0,0,0);
						led_set_RGB(4+MATRIX0,0,0,0);
						led_set_RGB(13+MATRIX0,0,0,0);
						led_set_RGB(14+MATRIX0,0,0,0);
						led_set_RGB(15+MATRIX0,0,0,0);
						led_set_RGB(16+MATRIX0,0,0,0);
						led_set_RGB(17+MATRIX0,0,0,0);
						led_set_RGB(18+MATRIX0,0,0,0);
						led_set_RGB(19+MATRIX0,0,0,0);
						led_set_RGB(20+MATRIX0,0,0,0);
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);
						led_set_RGB(25+MATRIX0,0,0,0);
						led_set_RGB(26+MATRIX0,0,0,0);
						led_set_RGB(27+MATRIX0,0,0,0);
						led_set_RGB(28+MATRIX0,0,0,0);
						break;
						case(2):
						led_set_RGB(5+MATRIX0,0,0,0);
						led_set_RGB(6+MATRIX0,0,0,0);
						led_set_RGB(7+MATRIX0,0,0,0);
						led_set_RGB(8+MATRIX0,0,0,0);
						led_set_RGB(17+MATRIX0,0,0,0);
						led_set_RGB(18+MATRIX0,0,0,0);
						led_set_RGB(19+MATRIX0,0,0,0);
						led_set_RGB(20+MATRIX0,0,0,0);
						break;
						case(3):
						led_set_RGB(17+MATRIX0,0,0,0);
						led_set_RGB(18+MATRIX0,0,0,0);
						led_set_RGB(19+MATRIX0,0,0,0);
						led_set_RGB(20+MATRIX0,0,0,0);
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);
						break;
						case(4):
						led_set_RGB(1+MATRIX0,0,0,0);
						led_set_RGB(2+MATRIX0,0,0,0);
						led_set_RGB(3+MATRIX0,0,0,0);
						led_set_RGB(4+MATRIX0,0,0,0);
						led_set_RGB(13+MATRIX0,0,0,0);
						led_set_RGB(14+MATRIX0,0,0,0);
						led_set_RGB(15+MATRIX0,0,0,0);
						led_set_RGB(16+MATRIX0,0,0,0);
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);
						break;
						case(5):
						led_set_RGB(9+MATRIX0,0,0,0);
						led_set_RGB(10+MATRIX0,0,0,0);
						led_set_RGB(11+MATRIX0,0,0,0);
						led_set_RGB(12+MATRIX0,0,0,0);
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);

						break;
						case(6):
						led_set_RGB(9+MATRIX0,0,0,0);
						led_set_RGB(10+MATRIX0,0,0,0);
						led_set_RGB(11+MATRIX0,0,0,0);
						led_set_RGB(12+MATRIX0,0,0,0);


						break;
						case(7):
						led_set_RGB(1+MATRIX0,0,0,0);
						led_set_RGB(2+MATRIX0,0,0,0);
						led_set_RGB(3+MATRIX0,0,0,0);
						led_set_RGB(4+MATRIX0,0,0,0);
						led_set_RGB(17+MATRIX0,0,0,0);
						led_set_RGB(18+MATRIX0,0,0,0);
						led_set_RGB(19+MATRIX0,0,0,0);
						led_set_RGB(20+MATRIX0,0,0,0);
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);
						led_set_RGB(25+MATRIX0,0,0,0);
						led_set_RGB(26+MATRIX0,0,0,0);
						led_set_RGB(27+MATRIX0,0,0,0);
						led_set_RGB(28+MATRIX0,0,0,0);
						break;
						case(8):
						break;
						case(9):
						led_set_RGB(21+MATRIX0,0,0,0);
						led_set_RGB(22+MATRIX0,0,0,0);
						led_set_RGB(23+MATRIX0,0,0,0);
						led_set_RGB(24+MATRIX0,0,0,0);
						break;
						}
break;
case(2):

				switch(number){
				case(0):
				led_set_RGB(25+MATRIX1, 0, 0, 0);
				led_set_RGB(26+MATRIX1, 0, 0, 0);
				led_set_RGB(27+MATRIX1, 0, 0, 0);
				led_set_RGB(28+MATRIX1, 0, 0, 0);
				break;
				case(1):
				led_set_RGB(1+MATRIX1,0,0,0);
				led_set_RGB(2+MATRIX1,0,0,0);
				led_set_RGB(3+MATRIX1,0,0,0);
				led_set_RGB(4+MATRIX1,0,0,0);
				led_set_RGB(13+MATRIX1,0,0,0);
				led_set_RGB(14+MATRIX1,0,0,0);
				led_set_RGB(15+MATRIX1,0,0,0);
				led_set_RGB(16+MATRIX1,0,0,0);
				led_set_RGB(17+MATRIX1,0,0,0);
				led_set_RGB(18+MATRIX1,0,0,0);
				led_set_RGB(19+MATRIX1,0,0,0);
				led_set_RGB(20+MATRIX1,0,0,0);
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);
				led_set_RGB(25+MATRIX1,0,0,0);
				led_set_RGB(26+MATRIX1,0,0,0);
				led_set_RGB(27+MATRIX1,0,0,0);
				led_set_RGB(28+MATRIX1,0,0,0);
				break;
				case(2):
				led_set_RGB(5+MATRIX1,0,0,0);
				led_set_RGB(6+MATRIX1,0,0,0);
				led_set_RGB(7+MATRIX1,0,0,0);
				led_set_RGB(8+MATRIX1,0,0,0);
				led_set_RGB(17+MATRIX1,0,0,0);
				led_set_RGB(18+MATRIX1,0,0,0);
				led_set_RGB(19+MATRIX1,0,0,0);
				led_set_RGB(20+MATRIX1,0,0,0);
				break;
				case(3):
				led_set_RGB(17+MATRIX1,0,0,0);
				led_set_RGB(18+MATRIX1,0,0,0);
				led_set_RGB(19+MATRIX1,0,0,0);
				led_set_RGB(20+MATRIX1,0,0,0);
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);
				break;
				case(4):
				led_set_RGB(1+MATRIX1,0,0,0);
				led_set_RGB(2+MATRIX1,0,0,0);
				led_set_RGB(3+MATRIX1,0,0,0);
				led_set_RGB(4+MATRIX1,0,0,0);
				led_set_RGB(13+MATRIX1,0,0,0);
				led_set_RGB(14+MATRIX1,0,0,0);
				led_set_RGB(15+MATRIX1,0,0,0);
				led_set_RGB(16+MATRIX1,0,0,0);
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);
				break;
				case(5):
				led_set_RGB(9+MATRIX1,0,0,0);
				led_set_RGB(10+MATRIX1,0,0,0);
				led_set_RGB(11+MATRIX1,0,0,0);
				led_set_RGB(12+MATRIX1,0,0,0);
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);

				break;
				case(6):
				led_set_RGB(9+MATRIX1,0,0,0);
				led_set_RGB(10+MATRIX1,0,0,0);
				led_set_RGB(11+MATRIX1,0,0,0);
				led_set_RGB(12+MATRIX1,0,0,0);

				break;
				case(7):
				led_set_RGB(1+MATRIX1,0,0,0);
				led_set_RGB(2+MATRIX1,0,0,0);
				led_set_RGB(3+MATRIX1,0,0,0);
				led_set_RGB(4+MATRIX1,0,0,0);
				led_set_RGB(17+MATRIX1,0,0,0);
				led_set_RGB(18+MATRIX1,0,0,0);
				led_set_RGB(19+MATRIX1,0,0,0);
				led_set_RGB(20+MATRIX1,0,0,0);
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);
				led_set_RGB(25+MATRIX1,0,0,0);
				led_set_RGB(26+MATRIX1,0,0,0);
				led_set_RGB(27+MATRIX1,0,0,0);
				led_set_RGB(28+MATRIX1,0,0,0);
				break;
				case(8):
				break;
				case(9):
				led_set_RGB(21+MATRIX1,0,0,0);
				led_set_RGB(22+MATRIX1,0,0,0);
				led_set_RGB(23+MATRIX1,0,0,0);
				led_set_RGB(24+MATRIX1,0,0,0);
				break;
				}

break;
case(3):


						switch(number){
						case(0):
						led_set_RGB(25+MATRIX2, 0, 0, 0);
						led_set_RGB(26+MATRIX2, 0, 0, 0);
						led_set_RGB(27+MATRIX2, 0, 0, 0);
						led_set_RGB(28+MATRIX2, 0, 0, 0);
						break;
						case(1):
						led_set_RGB(1+MATRIX2,0,0,0);
						led_set_RGB(2+MATRIX2,0,0,0);
						led_set_RGB(3+MATRIX2,0,0,0);
						led_set_RGB(4+MATRIX2,0,0,0);
						led_set_RGB(13+MATRIX2,0,0,0);
						led_set_RGB(14+MATRIX2,0,0,0);
						led_set_RGB(15+MATRIX2,0,0,0);
						led_set_RGB(16+MATRIX2,0,0,0);
						led_set_RGB(17+MATRIX2,0,0,0);
						led_set_RGB(18+MATRIX2,0,0,0);
						led_set_RGB(19+MATRIX2,0,0,0);
						led_set_RGB(20+MATRIX2,0,0,0);
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);
						led_set_RGB(25+MATRIX2,0,0,0);
						led_set_RGB(26+MATRIX2,0,0,0);
						led_set_RGB(27+MATRIX2,0,0,0);
						led_set_RGB(28+MATRIX2,0,0,0);
						break;
						case(2):
						led_set_RGB(5+MATRIX2,0,0,0);
						led_set_RGB(6+MATRIX2,0,0,0);
						led_set_RGB(7+MATRIX2,0,0,0);
						led_set_RGB(8+MATRIX2,0,0,0);
						led_set_RGB(17+MATRIX2,0,0,0);
						led_set_RGB(18+MATRIX2,0,0,0);
						led_set_RGB(19+MATRIX2,0,0,0);
						led_set_RGB(20+MATRIX2,0,0,0);
						break;
						case(3):
						led_set_RGB(17+MATRIX2,0,0,0);
						led_set_RGB(18+MATRIX2,0,0,0);
						led_set_RGB(19+MATRIX2,0,0,0);
						led_set_RGB(20+MATRIX2,0,0,0);
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);
						break;
						case(4):
						led_set_RGB(1+MATRIX2,0,0,0);
						led_set_RGB(2+MATRIX2,0,0,0);
						led_set_RGB(3+MATRIX2,0,0,0);
						led_set_RGB(4+MATRIX2,0,0,0);
						led_set_RGB(13+MATRIX2,0,0,0);
						led_set_RGB(14+MATRIX2,0,0,0);
						led_set_RGB(15+MATRIX2,0,0,0);
						led_set_RGB(16+MATRIX2,0,0,0);
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);
						break;
						case(5):
						led_set_RGB(9+MATRIX2,0,0,0);
						led_set_RGB(10+MATRIX2,0,0,0);
						led_set_RGB(11+MATRIX2,0,0,0);
						led_set_RGB(12+MATRIX2,0,0,0);
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);

						break;
						case(6):
						led_set_RGB(9+MATRIX2,0,0,0);
						led_set_RGB(10+MATRIX2,0,0,0);
						led_set_RGB(11+MATRIX2,0,0,0);
						led_set_RGB(12+MATRIX2,0,0,0);

						break;
						case(7):
						led_set_RGB(1+MATRIX2,0,0,0);
						led_set_RGB(2+MATRIX2,0,0,0);
						led_set_RGB(3+MATRIX2,0,0,0);
						led_set_RGB(4+MATRIX2,0,0,0);
						led_set_RGB(17+MATRIX2,0,0,0);
						led_set_RGB(18+MATRIX2,0,0,0);
						led_set_RGB(19+MATRIX2,0,0,0);
						led_set_RGB(20+MATRIX2,0,0,0);
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);
						led_set_RGB(25+MATRIX2,0,0,0);
						led_set_RGB(26+MATRIX2,0,0,0);
						led_set_RGB(27+MATRIX2,0,0,0);
						led_set_RGB(28+MATRIX2,0,0,0);
						break;
						case(8):
						break;
						case(9):
						led_set_RGB(21+MATRIX2,0,0,0);
						led_set_RGB(22+MATRIX2,0,0,0);
						led_set_RGB(23+MATRIX2,0,0,0);
						led_set_RGB(24+MATRIX2,0,0,0);
						break;
						}

break;
case(4):


						switch(number){
						case(0):
						led_set_RGB(25+MATRIX3, 0, 0, 0);
						led_set_RGB(26+MATRIX3, 0, 0, 0);
						led_set_RGB(27+MATRIX3, 0, 0, 0);
						led_set_RGB(28+MATRIX3, 0, 0, 0);
						break;
						case(1):
						led_set_RGB(1+MATRIX3,0,0,0);
						led_set_RGB(2+MATRIX3,0,0,0);
						led_set_RGB(3+MATRIX3,0,0,0);
						led_set_RGB(4+MATRIX3,0,0,0);
						led_set_RGB(13+MATRIX3,0,0,0);
						led_set_RGB(14+MATRIX3,0,0,0);
						led_set_RGB(15+MATRIX3,0,0,0);
						led_set_RGB(16+MATRIX3,0,0,0);
						led_set_RGB(17+MATRIX3,0,0,0);
						led_set_RGB(18+MATRIX3,0,0,0);
						led_set_RGB(19+MATRIX3,0,0,0);
						led_set_RGB(20+MATRIX3,0,0,0);
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);
						led_set_RGB(25+MATRIX3,0,0,0);
						led_set_RGB(26+MATRIX3,0,0,0);
						led_set_RGB(27+MATRIX3,0,0,0);
						led_set_RGB(28+MATRIX3,0,0,0);
						break;
						case(2):
						led_set_RGB(5+MATRIX3,0,0,0);
						led_set_RGB(6+MATRIX3,0,0,0);
						led_set_RGB(7+MATRIX3,0,0,0);
						led_set_RGB(8+MATRIX3,0,0,0);
						led_set_RGB(17+MATRIX3,0,0,0);
						led_set_RGB(18+MATRIX3,0,0,0);
						led_set_RGB(19+MATRIX3,0,0,0);
						led_set_RGB(20+MATRIX3,0,0,0);
						break;
						case(3):
						led_set_RGB(17+MATRIX3,0,0,0);
						led_set_RGB(18+MATRIX3,0,0,0);
						led_set_RGB(19+MATRIX3,0,0,0);
						led_set_RGB(20+MATRIX3,0,0,0);
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);
						break;
						case(4):
						led_set_RGB(1+MATRIX3,0,0,0);
						led_set_RGB(2+MATRIX3,0,0,0);
						led_set_RGB(3+MATRIX3,0,0,0);
						led_set_RGB(4+MATRIX3,0,0,0);
						led_set_RGB(13+MATRIX3,0,0,0);
						led_set_RGB(14+MATRIX3,0,0,0);
						led_set_RGB(15+MATRIX3,0,0,0);
						led_set_RGB(16+MATRIX3,0,0,0);
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);
						break;
						case(5):
						led_set_RGB(9+MATRIX3,0,0,0);
						led_set_RGB(10+MATRIX3,0,0,0);
						led_set_RGB(11+MATRIX3,0,0,0);
						led_set_RGB(12+MATRIX3,0,0,0);
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);

						break;
						case(6):
						led_set_RGB(9+MATRIX3,0,0,0);
						led_set_RGB(10+MATRIX3,0,0,0);
						led_set_RGB(11+MATRIX3,0,0,0);
						led_set_RGB(12+MATRIX3,0,0,0);

						break;
						case(7):
						led_set_RGB(1+MATRIX3,0,0,0);
						led_set_RGB(2+MATRIX3,0,0,0);
						led_set_RGB(3+MATRIX3,0,0,0);
						led_set_RGB(4+MATRIX3,0,0,0);
						led_set_RGB(17+MATRIX3,0,0,0);
						led_set_RGB(18+MATRIX3,0,0,0);
						led_set_RGB(19+MATRIX3,0,0,0);
						led_set_RGB(20+MATRIX3,0,0,0);
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);
						led_set_RGB(25+MATRIX3,0,0,0);
						led_set_RGB(26+MATRIX3,0,0,0);
						led_set_RGB(27+MATRIX3,0,0,0);
						led_set_RGB(28+MATRIX3,0,0,0);
						break;

						case(8):
						break;

						case(9):
						led_set_RGB(21+MATRIX3,0,0,0);
						led_set_RGB(22+MATRIX3,0,0,0);
						led_set_RGB(23+MATRIX3,0,0,0);
						led_set_RGB(24+MATRIX3,0,0,0);
						break;
						}

break;


}





}









#endif /* SRC_CLOCK_C_ */






