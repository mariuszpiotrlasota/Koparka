


//	(MotorLeft)		-|(D5:PB6)
//	(MotorLeft)		-|(D7:PF0)
//	(MotorRight)	-|(D11:PB5)
//  (MotorRight)    -|(A0:PA0)
//	(MotorBase)		-|(D3:PB0)
//	(MotorBase)		-|(D6:PB1)
//  (MotorFirstArm) -|(D1:PA9)
//  (MotorFirstArm) -|(D0:PA10)


#define MotorLeftA_GPIO 		 GPIOB				//PB6
#define MotorLeftA_PIN  		 GPIO_PIN_6
#define MotorLeftB_GPIO 		 GPIOF				//PF0
#define MotorLeftB_PIN  		 GPIO_PIN_0

#define MotorRightA_GPIO 		GPIOB				//PB5
#define MotorRightA_PIN  		GPIO_PIN_5
#define MotorRightB_GPIO 		GPIOA				//PA0
#define MotorRightB_PIN  		GPIO_PIN_0

#define MotorBaseA_GPIO  		GPIOB				//PB0
#define MotorBaseA_PIN 	 		GPIO_PIN_0
#define MotorBaseB_GPIO  		GPIOB				//PB1
#define MotorBaseB_PIN  		GPIO_PIN_1

#define MotorFirstArmA_GPIO 	GPIOA			//PA9
#define MotorFirstArmA_PIN 		GPIO_PIN_9
#define MotorFirstArmB_GPIO 	GPIOA				//PA10
#define MotorFirstArmB_PIN  	GPIO_PIN_10





//Funkcje
void Motor_LeftForward(void);
void Motor_LeftBack(void);
void Motor_RightForward(void);
void Motor_RightBack(void);
void Execute_MoveForward(void);
void Execute_MoveBack(void);
void Execute_MoveLeft(void);
void Execute_MoveRight(void);
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


void Eval_LEDTest(void);




#ifndef INC_PROGRAM_H_
#define INC_PROGRAM_H_



#endif /* INC_PROGRAM_H_ */
