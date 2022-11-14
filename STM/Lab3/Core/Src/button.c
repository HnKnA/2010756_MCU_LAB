/*
 * button.c
 *
 *  Created on: Sep 24, 2022
 *      Author: A.Tuan
 */
#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

int TimeOutForKeyPress =  100;
int TimeOutForKeyPress2 = 100;
int TimeOutForKeyPress3 = 100;

void subKeyProcess(){

	button1_flag = 1;
}
void getKeyInput(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(BUTTON_MODE_GPIO_Port, BUTTON_MODE_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 100;
        subKeyProcess();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}


void getKeyInput2(){
	  KeyReg6 = KeyReg5;
	  KeyReg5 = KeyReg4;
	  KeyReg4 = HAL_GPIO_ReadPin(BUTTON_INCREASE_GPIO_Port, BUTTON_INCREASE_Pin);
	  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
	    if (KeyReg6 != KeyReg7){
	      KeyReg7 = KeyReg6;

	      if (KeyReg7 == PRESSED_STATE){
	        TimeOutForKeyPress2 = 100;
	        button2_flag = 1;
	      }
	    }else{
	       TimeOutForKeyPress2 --;
	        if (TimeOutForKeyPress2 == 0){
	          KeyReg7 = NORMAL_STATE;
	        }
	    }
	  }
}

void getKeyInput3(){
	  KeyReg10 = KeyReg9;
	  KeyReg9 = KeyReg8;
	  KeyReg8 = HAL_GPIO_ReadPin(BUTTON_SET_GPIO_Port, BUTTON_SET_Pin);
	  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
	    if (KeyReg10 != KeyReg11){
	      KeyReg11 = KeyReg10;

	      if (KeyReg11 == PRESSED_STATE){
	        TimeOutForKeyPress3 = 100;
	        button3_flag = 1;
	      }
	    }else{
	       TimeOutForKeyPress3 --;
	        if (TimeOutForKeyPress3 == 0){
	          KeyReg11 = NORMAL_STATE;
	        }
	    }
	  }
}
