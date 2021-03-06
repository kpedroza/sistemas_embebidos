/****************************************************************************************************/
/**
\file       interrupt.c
\brief      Interrupt services.
\author     Abraham Tezmol
\version    1.0
\date       31/10/2008
*/
/****************************************************************************************************/

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Own headers */
/** Interrupt functions and definitions */
#include    "interrupt.h"

/** Used modules */

/*****************************************************************************************************
* Declaration of module wide FUNCTIONs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs 
*****************************************************************************************************/

/*****************************************************************************************************
* Declaration of module wide TYPEs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide VARIABLEs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide (CONST-) CONSTANTs 
*****************************************************************************************************/

/*****************************************************************************************************
* Code of module wide FUNCTIONS
*****************************************************************************************************/

/****************************************************************************************************/
/**
* \brief    Interrupt Module - Initialization of timer module
* \author   Abraham Tezmol
* \param    void
* \return   void
* \todo     
*/
void vfnInterrupt_Init( void  )
{

#ifdef __S12_CORE
        /* Intilialize the interupt vector base address for default location */
    IVBR = 0xFFu;
#endif

#ifdef __S08_CORE
#endif
}

/****************************************************************************************************/