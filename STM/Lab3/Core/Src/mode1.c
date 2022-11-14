/*
 * mode1.c
 *
 *  Created on: Nov 1, 2022
 *      Author: A.Tuan
 */

#include "mode1.h"

char led_status[2] = {'R', 'R'};





  void display7SEG(int num, char axis){
  	if(num == 0){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
  		}
  	}
  	else if(num == 1){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
  		}
  	}
  	else if(num == 2){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 3){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 4){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 5){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
  	 	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 6){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 7){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
  		}
  	}
  	else if(num == 8){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  	else if(num == 9){
  		if(axis == 'x'){
  		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
  		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
  		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
  		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
  		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
  		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
  		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
  		}
  		else if(axis == 'y'){
  	  	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
  	  	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
  	  	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
  	  	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
  	  	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
  	  	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
  	  	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
  		}
  	}
  }

  void mode1(){

		  if(timer1_flag == 1){
		  if(led_status[0] != 'Y' && led_status[1] == 'R'){
			  	  display7SEG(green_time[0], 'x');
			  	  display7SEG(green_time[0] + yellow_time[0], 'y');
		 		  green_time[0]--;
		 		  if(green_time[0] == 0){
		 			  green_time[0] = green_time_global;
		 			  led_status[0] = 'Y';
		 		  }
		 		  HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, SET);
		 		  HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, SET);
		 	  }
		 	  else if(led_status[0] == 'Y' && led_status[1] == 'R'){
			  	  display7SEG(yellow_time[0], 'x');
			  	  display7SEG(yellow_time[0], 'y');
		 		  yellow_time[0]--;
		 		  if(yellow_time[0] == 0){
		 			  yellow_time[0] = yellow_time_global;
		 			  led_status[0] = 'R';
		 			  led_status[1] = 'G';
		 		  }
		 		  HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port, LED_GREEN_X_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, SET);
		 	  }
		 	  else if(led_status[0] == 'R' && led_status[1] == 'G'){
			  	  display7SEG(green_time[1] + yellow_time[1], 'x');
			  	  display7SEG(green_time[1], 'y');
		 		  green_time[1]--;
		 		  if(green_time[1] == 0){
		 			  green_time[1] = green_time_global;
		 			  led_status[1] = 'Y';
		 		  }
		 		  HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port, LED_YELLOW_X_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_RED_X_GPIO_Port, LED_RED_X_Pin, SET);
		 		  HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port, LED_RED_Y_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, SET);
		 	  }
		 	  else if(led_status[0] == 'R' && led_status[1] == 'Y'){
			  	  display7SEG(yellow_time[1], 'x');
			  	  display7SEG(yellow_time[1], 'y');
		 		  yellow_time[1]--;
		 		  if(yellow_time[1] == 0){
		 			  yellow_time[1] = yellow_time_global;
		 			  led_status[1] = 'R';
		 			  led_status[0] = 'G';
		 		  }
		 		  HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port, LED_GREEN_Y_Pin, RESET);
		 		  HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port, LED_YELLOW_Y_Pin, SET);
		 	  }
		  setTimer(100);
		  }
  }


  void display7SEG_mode(){
		HAL_GPIO_WritePin(a_mode_GPIO_Port, a_mode_Pin, RESET);
		HAL_GPIO_WritePin(b_mode_GPIO_Port, b_mode_Pin, RESET);
		HAL_GPIO_WritePin(c_mode_GPIO_Port, c_mode_Pin, RESET);
		HAL_GPIO_WritePin(d_mode_GPIO_Port, d_mode_Pin, RESET);
		HAL_GPIO_WritePin(e_mode_GPIO_Port, e_mode_Pin, RESET);
		HAL_GPIO_WritePin(f_mode_GPIO_Port, f_mode_Pin, RESET);
		HAL_GPIO_WritePin(g_mode_GPIO_Port, g_mode_Pin, SET);
  }

