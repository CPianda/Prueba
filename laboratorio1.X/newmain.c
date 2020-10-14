/*
 * File:   newmain.c
 * Author: usuar
 *
 * Created on 15 de agosto de 2020, 06:28 PM
 */

#include <xc.h>
#define _XTAL_FREQ 4000000


void main(void) {
    int mode;
    ADCON1=0b00001111;
    TRISA=0b00000000;
    PORTA=0b00000000;
    TRISB=0b00000000;
    PORTB=0b00000000;
    TRISD=0b00000000;
    PORTD=0b00000000;
    
    if (PORTA==0b0000100){
        mode++;
        PORTD=0b00001000;
        __delay_ms(2000);
    }
    else{
       PORTD=0b11111111; 
    }
    switch (mode) {
    case 1 :
        for (int i=7;i==0;i--){
            PORTB=2^i;
            __delay_ms(200);
        }
        for (int i=0;i==7;i++){
            PORTB=2^i;
            __delay_ms(200);
        }
       break;
    //case 2 : "code"
   //   break;
    default : 
    break;
    }
    //PORT
    
    return;
}