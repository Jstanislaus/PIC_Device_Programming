/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F14K50
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_ANS                  ANSELHbits.ANS10
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set START_STOP aliases
#define START_STOP_TRIS                 TRISCbits.TRISC0
#define START_STOP_LAT                  LATCbits.LATC0
#define START_STOP_PORT                 PORTCbits.RC0
#define START_STOP_ANS                  ANSELbits.ANS4
#define START_STOP_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define START_STOP_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define START_STOP_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define START_STOP_GetValue()           PORTCbits.RC0
#define START_STOP_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define START_STOP_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define START_STOP_SetAnalogMode()      do { ANSELbits.ANS4 = 1; } while(0)
#define START_STOP_SetDigitalMode()     do { ANSELbits.ANS4 = 0; } while(0)

// get/set SOURCE aliases
#define SOURCE_TRIS                 TRISCbits.TRISC1
#define SOURCE_LAT                  LATCbits.LATC1
#define SOURCE_PORT                 PORTCbits.RC1
#define SOURCE_ANS                  ANSELbits.ANS5
#define SOURCE_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SOURCE_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SOURCE_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SOURCE_GetValue()           PORTCbits.RC1
#define SOURCE_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SOURCE_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SOURCE_SetAnalogMode()      do { ANSELbits.ANS5 = 1; } while(0)
#define SOURCE_SetDigitalMode()     do { ANSELbits.ANS5 = 0; } while(0)

// get/set MIRROR aliases
#define MIRROR_TRIS                 TRISCbits.TRISC2
#define MIRROR_LAT                  LATCbits.LATC2
#define MIRROR_PORT                 PORTCbits.RC2
#define MIRROR_ANS                  ANSELbits.ANS6
#define MIRROR_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define MIRROR_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define MIRROR_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define MIRROR_GetValue()           PORTCbits.RC2
#define MIRROR_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define MIRROR_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define MIRROR_SetAnalogMode()      do { ANSELbits.ANS6 = 1; } while(0)
#define MIRROR_SetDigitalMode()     do { ANSELbits.ANS6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/