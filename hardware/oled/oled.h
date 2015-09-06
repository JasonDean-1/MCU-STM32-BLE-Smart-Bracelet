#ifndef __OLED_H
#define __OLED_H			  	 
#include "stdlib.h"	    
#include "stdbool.h"
#include "stdint.h"
#include "nrf_gpio.h"
//OLEDģʽ����
//0:4�ߴ���ģʽ
//1:����8080ģʽ
#define OLED_MODE 0
//-----------------OLED�˿ڶ���---------------- 
#define OLED_CS_PIN   		8
#define OLED_RST_PIN  		10
#define OLED_RS_PIN   		9
#define OLED_SCLK_PIN   	12  
#define OLED_SDIN_PIN   	11
#define OLED_POWER_PIN    13

#define OLED_CS(n)   nrf_gpio_pin_write(OLED_CS_PIN, n)
#define OLED_RST(n)  nrf_gpio_pin_write(OLED_RST_PIN, n)
#define OLED_RS(n)   nrf_gpio_pin_write(OLED_RS_PIN, n)
#define OLED_SCLK(n) nrf_gpio_pin_write(OLED_SCLK_PIN, n)
#define OLED_SDIN(n) nrf_gpio_pin_write(OLED_SDIN_PIN, n)
#define OLED_POWER(n) nrf_gpio_pin_write(OLED_POWER_PIN, n)

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
//OLED�����ú���
void OLED_WR_Byte(uint8_t dat,uint8_t cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);		   

void OLED_POWER_CONTROL(uint8_t sta);					   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_Fill(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t dot);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr,uint8_t size,uint8_t mode);
void OLED_ShowNum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);
void OLED_ShowString(uint8_t x,uint8_t y,const uint8_t *p);	

void OLED_ShowBatteryLevel(uint8_t x, uint8_t y, uint8_t battery_level);
void OLED_ShowTempUint(uint8_t x, uint8_t y);
#endif  
	 



