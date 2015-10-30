/*******************************************************************************/
/**
\file       cam_crank.h
\brief      Definitions and function prototypes for CAM CRANK signal generation
\author     Abraham Tezmol
\version    0.1
\date       04/04/2010
*/
/*******************************************************************************/

#ifndef __PMW_DRIVER_H        /*prevent duplicated includes*/
#define __PMW_DRIVER_H

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Configuration Options */
	#include 	"configuration.h"
/** S12X derivative information */
	#include 	__MCU_DERIVATIVE
/** Variable types */
	#include 	"typedefs.h"
/** Periodic Interrupt Timer routines prototypes */
	#include  "pit.h"	
/** XGATE definitions */
  #include    "xgate_config.h"	

/****************************************************************************************************
* Declaration of module wide TYPEs 
*****************************************************************************************************/

//Not yet sure about the PWM structure
typedef struct {
	UINT8 * u8Port;
	UINT8 u8Period;
 	UINT8 u8Duty;
  UINT8 u8BitMask;
  }stPWMDescr;

typedef struct {
	stPWMDescr 	* stPWMDescriptor;	
} stPWMControl;

/*****************************************************************************************************
* Definition of module wide VARIABLEs 
*****************************************************************************************************/


#pragma DATA_SEG SHARED_DATA
	extern stPWMDescr PWM_channels[];                         
#pragma DATA_SEG DEFAULT

/****************************************************************************************************
* Declaration of module wide FUNCTIONs 
****************************************************************************************************/

/****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs 
*****************************************************************************************************/

#define PWM_DRIVER_SEMAPHORE	0x01

/****************************************************************************************************
* Definition of module wide (CONST-) CONSTANTs 
*****************************************************************************************************/

/****************************************************************************************************
* Code of module wide FUNCTIONS
*****************************************************************************************************/ 

#pragma CODE_SEG XGATE_CODE

/* Read Cam Crank ISR callback */	
		void vfnPWM_Driver_Callback( void );

#pragma CODE_SEG DEFAULT

/* PWM - Initialization */
void vfnPWM_Driver_Init( void );

#pragma DATA_SEG SHARED_DATA
  extern UINT8 PMW_Status;
#pragma DATA_SEG DEFAULT

/* Emulated PWM - Initialization */
#pragma CODE_SEG XGATE_CODE
	//void interrupt vfnCamCrank_Init_XGATE_Isr(void); ¿Cómo aquí qué?
#pragma CODE_SEG DEFAULT	

/* PWM - Start */
void vfnPMW_Start ( void );

#endif /* __PMW_DRIVER_H */

/*******************************************************************************/