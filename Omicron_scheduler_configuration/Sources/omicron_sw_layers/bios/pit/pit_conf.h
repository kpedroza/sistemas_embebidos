/****************************************************************************************************/
/**
\file       pit.h
\brief      Periodic Interrupt Timer initialization and low-level functions and prototypes
\author     Abraham Tezmol
\version    1.0
\date       11/Abr/2010
*/
/****************************************************************************************************/
#ifndef __PIT_CONF_H        /*prevent duplicated includes*/
#define __PIT_CONF_H

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Core Modules */
/** Configuration Options */
  #include    "configuration.h"
/** S12X derivative information */
  #include    __MCU_DERIVATIVE
/** Variable types and common definitions */
  #include    "typedefs.h"

/** Used Modules */
/** PLL definitions and prototypes*/
  #include    "pll.h"
/* XGATE relevant data types and prototypes */
  #include "xgate_vectors.h"
/** XGATE Intrinsics */
	#include "intrinsics_xgate.h"

/*****************************************************************************************************
* Declaration of module wide TYPES
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of  VARIABLEs - 
*****************************************************************************************************/

/* vfnPIT0_Callback, function to be called upon timeout of PIT channel 0 */

/* vfnPIT1_Callback, function to be called upon timeout of PIT channel 1 */
#pragma DATA_SEG SHARED_DATA

#pragma DATA_SEG DEFAULT	

/*****************************************************************************************************
* Definition of module wide MACROS / #DEFINE-CONSTANTS 
*****************************************************************************************************/

/** Periodic Interrupt Timer definitions */

/** Periodic Interrupt Timer macros */


/*****************************************************************************************************
* Declaration of module wide FUNCTIONS
*****************************************************************************************************/



/** PIT Channel 0 ISR --> Main CPU  */


/** PIT Channel 1 ISR --> XGATE  */
#pragma CODE_SEG XGATE_CODE

#pragma CODE_SEG DEFAULT

/*******************************************************************************/

/*****************************************************************************************************
* Declaration of module wide Structures
*****************************************************************************************************/

 //Enums de devices
 //Enums de channels
 //Enums de drivers
 
 typedef struct{
  UINT8 timeout_value;
  UINT8 PIT_Channel;
  UINT8 ctrl_frz;
  UINT8 micro_timer_mux;
  UINT8 enable_PIT;
  UINT8 interrupt_enable;
 }PIT_channel_config; 

 typedef struct{
  UINT8 device;  //Hacer enum
  UINT8 no_of_channels;
  PIT_channel_config * config_channel;
  UINT8 micro_channel_0;
  UINT8 micro_channel_1;
 }PIT_device_config;

 
  typedef struct{
  UINT8 no_of_devices;
  PIT_device_config * config_device;
 }PIT_driver_config;
 
 
 

#endif /* __PIT_H */