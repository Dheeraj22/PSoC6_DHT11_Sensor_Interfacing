/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "DHT11.h"
#include "stdio.h"

#define READ_FREQ 1000 /* Read sensor every 1000 ms */

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */
    
    uint8* data;
    char buffer[100];

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();    
    UART_PutString("Results\n\r");

    for(;;)
    {
        /* Place your application code here. */
        data = DHT_Read();
        if(data[0] != ERROR){
            sprintf(buffer, " Humdity: %d \n\r Temperature: %d \n\r", data[0], data[2]);
            UART_PutString(buffer);
        }else{
            UART_PutString(" Error reading sensor!\n\r");
        }

        Cy_SysLib_Delay(READ_FREQ);
    }
}

/* [] END OF FILE */
