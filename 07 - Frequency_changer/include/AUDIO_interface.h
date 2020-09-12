/*****************************************************/
 /* Author      : mosad                              */
 /* Version     : v01                                */
 /* date        : 8/9/2020                          */
/*****************************************************/
#ifndef AUDIO_INTERFACE_H
#define AUDIO_INTERFACE_H


/***********************************************************/
 /* Function Name  : AUDIO_voidInit 
  * Function Type  : Initialization 
  * Parameters     : void 
  * Return         : void
  * Discription    : configure DAC pins as OUTPUT 
  * Pre-conditions : RCC must be enabled for the GPIO ports used				
  */				
/************************************************************/
void AUDIO_voidInit (void);

/***********************************************************/
 /* Function Name  : AUDIO_voidSetDAC 
  * Function Type  : Periodic Task
  * Parameters     : void 
  * Return         : void
  * Discription    : Write one byte of the audio to the DAC port
  * Pre-conditions : OS must be initialized first 
  * Notes          : Period of the task will determine the audio 
					 frequency 
					 for human at least period must be 125 us 
  */				
/************************************************************/
void AUDIO_voidSetDAC (void);



#endif