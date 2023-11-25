//		*PT8A993A*
//								_	_	_
//				1	-|							|-	24
//	(GND)		2	-|							|-	23
//				3	-|							|-	22
//				4	-|							|-	21	(VCC)
//				5	-|							|-	20	(SecondArm)
//	(MotorLeft)	6	-|(D5:PB6)					|-	19	(FirstArm)
//	(MotorBase)	7	-|							|-	18	(FirstArm)
//	(MotorLeft)	8	-|(D7:PF0)					|-	17
//	(MotorBase)	9	-|							|-	16
//				10	-|							|-	15	(SecondArm)
//				11	-|							|-	14
//	(MotorRight)12	-|(D11:PB4)			(A0:PB3)|-	13	(MotorRight)
//								_	_	_

//Deklaracje
#define GPIO_MotorLeft_A		GPIOB
#define PIN_MotorLeft_A		    GPIO_PIN_6
#define GPIO_MotorLeft_B		GPIOF
#define PIN_MotorLeft_B 		GPIO_PIN_0

#define GPIO_MotorRight_A		GPIOB
#define PIN_MotorRight_A	    GPIO_PIN_4
#define GPIO_MotorRight_B		GPIOB
#define PIN_MotorRight_B 		GPIO_PIN_3

#define GPIO_MotorBase_A		GPIOB
#define PIN_MotorBase_A	    	GPIO_PIN_3
#define GPIO_MotorBase_B		GPIOB
#define PIN_MotorBase_B 		GPIO_PIN_3



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
