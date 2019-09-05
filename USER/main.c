/**************************************
 * 文件名  ：main.c
 * 描述    ：板子上的LED1闪烁。         
 * 实验平台：MINI STM32开发板 基于STM32F103C8T6
 * 库版本  ：ST3.0.0  																										  

*********************************************************/	

#include "led.h"
#include "FreeRTOS.h"
#include "task.h"
#include "hal_common.h"

void Delay(__IO u32 nCount); 
void LedTask1(void *pvParameters);

int main(void)
{
	hal_init(MACH_TYPE_MINISYS);
	LED_GPIO_Config(); 			//LED 端口初始化 
													//堆栈深度（字）  //任务参数 //任务优先级 //任务句柄
	xTaskCreate(LedTask1,"LED_TASK1",40,NULL,1,NULL);     	
	vTaskStartScheduler();	//启动任务调度器
	return 0;
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 
void LedTask1(void *pvParameters)
{
  while (1)
  {
		LED1( ON );			  // 亮
		vTaskDelay(100 / portTICK_RATE_MS); 
		LED1( OFF );		  // 灭
		vTaskDelay(100 / portTICK_RATE_MS); 
  }
}


