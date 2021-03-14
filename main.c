/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : main.c
Purpose : Generic application start

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "nrf52840.h"

/*********************************************************************
*
*       main()
*
*  Function description
*   Application entry point.
*/
int main(void)
{
    int i = 1;
    uint32_t data;

    printf("Hello World %d!\n", i);
    data = NRF_P0->DIRSET;
    data |= 0x00002000;
    NRF_P0->DIRSET = data;
    //NRF_P0->OUT |= 0x00002000;
    do
    {
        i++;
    }while (1);
}

/*************************** End of file ****************************/
