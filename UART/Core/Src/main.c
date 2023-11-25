#include "main.h"
#include "program.h"



//Define Message
#define Message_MoveForward 		65 		// chart A
#define Message_MoveBack 			66		// chart B
#define Message_MoveLeft 			67		// chart C
#define Message_MoveRight 			68		// chart D
#define Message_RotateBaseLeft 		69		// chart E
#define Message_RotateBaseRight 	70		// chart F
#define Message_FirstArmUp 			71		// chart G
#define Message_FirstArmDown 		72 		// chart H
#define Message_SecondArmUp			73		// chart I
#define Message_SecondArmDown 		74		// chart J
#define Message_SpoonUp 			75		// chart K
#define Message_SpoonDown 			76		// chart L
#define Message_LightOn 			77		// chart M
#define Message_LightOff 			78		// chart N

#define String_Bufforsize 35
#define UART_Timeout 1000


//Text Messages
char String_MoveForward[] 		= "Message_MoveForward(A,65)\r\n";
char String_MoveBack[] 			= "Message_MoveBack(B,66)\r\n";
char String_MoveLeft[]			= "Message_MoveLeft(C,67)\r\n";
char String_MoveRight[] 		= "Message_MoveRight(D,68)\r\n";
char String_RotateBaseLeft[] 	= "Message_RotateBaseLeft(E,69)\r\n";
char String_RotateBaseRight[] 	= "Message_RotateBaseRight(F,70)\r\n";
char String_FirstArmUp[]		= "Message_FirstArmUp(G,71)\r\n";
char String_FirstArmDown[] 		= "Message_FirstArmDown(H,72)\r\n";
char String_SecondArmUp[] 		= "Message_SecondArmUp(I,73)\r\n";
char String_SecondArmDown[] 	= "Message_SecondArmDown(J,74)\r\n";
char String_SpoonUp[] 			= "Message_SpoonUp(K,75)\r\n";
char String_SpoonDown[] 		= "Message_SpoonDown(L,76)\r\n";
char String_LightOn[] 			= "Message_LightOn(M,77)\r\n";
char String_LightOff[] 			= "Message_LightOff(N,78)\r\n";

char String_StandBy[] 			= "-Stand By\r\n";

//Variables
uint8_t Message;

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;



/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);


/* Private user code ---------------------------------------------------------*/
int main(void)
{
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();

  while (1) {

 	   	  HAL_UART_Receive_IT(&huart2, &Message, 1); //Read from Interrupt


 	   	    switch (Message) {
 	   	        case (Message_MoveForward): //A
 	   	        	HAL_UART_Transmit(&huart2,&String_MoveForward,String_Bufforsize,UART_Timeout);
 	   	        	Motor_LeftForward();
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_MoveBack: //B
 	   	        	HAL_UART_Transmit(&huart2,&String_MoveBack,String_Bufforsize,UART_Timeout);
 	   	        	Motor_LeftBack();
 	   	        	Message=0;
 	   	            break;

 	   	        case (Message_MoveLeft): //C
 	   	        	HAL_UART_Transmit(&huart2,&String_MoveLeft,String_Bufforsize,UART_Timeout);
 	   	        	Motor_RightForward();
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_MoveRight: //D
 	   	        	HAL_UART_Transmit(&huart2,&String_MoveRight,String_Bufforsize,UART_Timeout);
 	   	        	Motor_RightBack();
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_RotateBaseLeft: //E
 	   	        	HAL_UART_Transmit(&huart2,&String_RotateBaseLeft,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_RotateBaseRight: //F
 	   	        	HAL_UART_Transmit(&huart2,&String_RotateBaseRight,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_FirstArmUp: //G
 	   	        	HAL_UART_Transmit(&huart2,&String_FirstArmUp ,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_FirstArmDown: //H
 	   	        	HAL_UART_Transmit(&huart2,&String_FirstArmDown,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_SecondArmUp: //I
 	   	        	HAL_UART_Transmit(&huart2,&String_SecondArmUp,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_SecondArmDown: //J
 	   	        	HAL_UART_Transmit(&huart2,&String_SecondArmDown,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_SpoonUp: //K
 	   	        	HAL_UART_Transmit(&huart2,&String_SpoonUp,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_SpoonDown: //L
 	   	        	HAL_UART_Transmit(&huart2,&String_SpoonDown,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_LightOn: //M
 	   	        	HAL_UART_Transmit(&huart2,&String_LightOn,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        case Message_LightOff: //N
 	   	        	HAL_UART_Transmit(&huart2,&String_LightOff,String_Bufforsize,UART_Timeout);
 	   	        	Message=0;
 	   	            break;

 	   	        default: //STAND BY
 	   	    	   HAL_UART_Transmit(&huart2,&String_StandBy,sizeof(String_StandBy),UART_Timeout);// Sending in normal mode
 	   	      	   break;

 	   	    }
 	   	   HAL_Delay(1000);


 	     }
 }


void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 9600;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_5|GPIO_PIN_6
                          |GPIO_PIN_7, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, GPIO_PIN_0, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA0 PA1 PA2 PA3
                           PA4 PA5 PA6 PA7
                           PA8 PA9 PA10 PA11
                           PA12 PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0 PB1 PB5 PB6
                           PB7 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_5|GPIO_PIN_6
                          |GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
