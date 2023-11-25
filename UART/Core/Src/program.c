#include "main.h"
#include "program.h"

void Motor_LeftForward(void){
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_5,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0,GPIO_PIN_RESET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_5,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0,GPIO_PIN_RESET);
}


void Motor_LeftBack(void){
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_5,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0,GPIO_PIN_SET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_5,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0,GPIO_PIN_RESET);
}

void Motor_RightForward(void){
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (GPIOF, GPIO_PIN_0,GPIO_PIN_RESET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (GPIOF, GPIO_PIN_0,GPIO_PIN_RESET);
}


void Motor_RightBack(void){
	HAL_GPIO_WritePin (GPIOF, GPIO_PIN_0,GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6,GPIO_PIN_RESET);
    HAL_Delay(1000);
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (GPIOF, GPIO_PIN_0,GPIO_PIN_RESET);
}




void Execute_MoveForward(void){

}



void Execute_MoveBack(void){

}

void Execute_MoveLeft(void){

}


void Execute_MoveRight(void){

}



void Execute_RotateBaseLeft(void);
void Execute_RotateBaseRight(void);
void Execute_FirstArmUp(void);
void Execute_FirstArmDown(void);
void Execute_SecondArmUp(void);
void Execute_SecondArmDown(void);
void Execute_SpoonUp(void);
void Execute_SpoonDown(void);
void Execute_LightOn(void);
void Execute_LightOff(void);

void Eval_LEDTest(void){
		HAL_GPIO_WritePin (GPIOB, GPIO_PIN_3,GPIO_PIN_SET);
	    HAL_Delay(1000);
	   	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_3,GPIO_PIN_RESET);
	   	HAL_Delay(1000);
}


