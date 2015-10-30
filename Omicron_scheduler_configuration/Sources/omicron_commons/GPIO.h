/*******************************************************************************/
/**
\file       GPIO_macros.h
\brief      Macro definitions for registers access and I/O handling
\author     Abraham Tezmol
\version    0.2
\date       7/07/2008
*/
/*******************************************************************************/

#ifndef _GPIO_H        /*prevent duplicated includes*/
#define _GPIO_H

/*-- Includes ----------------------------------------------------------------*/

/** Core modules */
/** Configuration Options */
#include "configuration.h"
/** MCU derivative information */
#include __MCU_DERIVATIVE
/** Variable types and common definitions */
#include "typedefs.h"
#include "conf_GPIO.h"

/*-- Variables ---------------------------------------------------------------*/

/*-- Types Definitions -------------------------------------------------------*/

/*-- Defines -----------------------------------------------------------------*/
#define LED_Port    PORTA
#define D0         1
#define D1         2
#define D2         4
#define D3         8
#define D4         16
#define D5         32
#define D6         64
#define D7         128

/*-- Macros ------------------------------------------------------------------*/
/* Indicator LEDs handling */

/** Set LED */ 
#define LED_ON(BitMask)                     (LED_Port |= (UINT8)(BitMask))
/** Clear LED */ 
#define LED_OFF(BitMask)                    (LED_Port &= ~(UINT8)(BitMask))
/** Toggle LED */ 
#define LED_TOGGLE(BitMask)                 (LED_Port ^= (UINT8)(BitMask)) 


/*-- Function Prototypes -----------------------------------------------------*/

void vfnGPIO_FlashMainLED(UINT8 u8LED0,UINT8 u8LED1,UINT8 u8LED2);
void vfnGPIO_LED_Init(void);

/*-- Status Structs ----------------------------------------------------------*/

typedef struct{
 UINT8 channel_actual_state;
 UINT8 config_state;
 UINT8 high_low_state;
 UINT8 channel; 
}stGPIO_channel_status;

typedef struct{
 stGPIO_channel_status * channel_status; 
 UINT8 no_of_channels;
 UINT8 PORT_X;
}stGPIO_device_status;

typedef struct{
 stGPIO_device_status * device_status;
 UINT8 no_of_devices; 
}stGPIO_driver_status;




#endif /* _GPIO_H */

/*******************************************************************************/