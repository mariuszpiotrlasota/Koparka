#include "main.h"
#include "program.h"

void Motor_LeftForward(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
}


void Motor_LeftBack(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_SET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
}

void Motor_RightForward(void){
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}


void Motor_RightBack(void){
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_SET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}


void Execute_MoveForward(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}


void Execute_MoveBack(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_SET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_SET);
   	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}


void Execute_MoveLeft(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_SET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}


void Execute_MoveRight(void){
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_SET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_SET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorLeftA_GPIO, MotorLeftA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorLeftB_GPIO, MotorLeftB_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorRightA_GPIO, MotorRightA_PIN,GPIO_PIN_RESET);
   	HAL_GPIO_WritePin (MotorRightB_GPIO, MotorRightB_PIN,GPIO_PIN_RESET);
}



void Execute_RotateBaseLeft(void){
		HAL_GPIO_WritePin (MotorBaseA_GPIO, MotorBaseA_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin (MotorBaseB_GPIO, MotorBaseB_PIN,GPIO_PIN_SET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin (MotorBaseA_GPIO, MotorBaseA_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin (MotorBaseB_GPIO, MotorBaseB_PIN,GPIO_PIN_RESET);
}


void Execute_RotateBaseRight(void){
	HAL_GPIO_WritePin (MotorBaseA_GPIO, MotorBaseA_PIN,GPIO_PIN_SET);
	HAL_GPIO_WritePin (MotorBaseB_GPIO, MotorBaseB_PIN,GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorBaseA_GPIO, MotorBaseA_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorBaseB_GPIO, MotorBaseB_PIN,GPIO_PIN_RESET);
}


void Execute_FirstArmUp(void){
	HAL_GPIO_WritePin (MotorFirstArmA_GPIO, MotorFirstArmA_PIN,GPIO_PIN_SET);
	HAL_GPIO_WritePin (MotorFirstArmB_GPIO, MotorFirstArmB_PIN,GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorFirstArmA_GPIO, MotorFirstArmA_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorFirstArmB_GPIO, MotorFirstArmB_PIN,GPIO_PIN_RESET);
}



void Execute_FirstArmDown(void){
	HAL_GPIO_WritePin (MotorFirstArmA_GPIO, MotorFirstArmA_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorFirstArmB_GPIO, MotorFirstArmB_PIN,GPIO_PIN_SET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin (MotorFirstArmA_GPIO, MotorFirstArmA_PIN,GPIO_PIN_RESET);
	HAL_GPIO_WritePin (MotorFirstArmB_GPIO, MotorFirstArmB_PIN,GPIO_PIN_RESET);
}






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


