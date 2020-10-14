/*
 * File:   newmain.c
 * Author: usuar
 *
 * Created on 12 de agosto de 2020, 03:16 PM
 */


#include <xc.h>

void main(void) {
    TRISD=0b11110000;//modifica el TRIS D en binario
    PORTD=0x04;//modifica el puerto D en hexadecimal
    PORTDbits.RD4=1;//solo modifica ese bit, los demas los deja quietos
    return;
}
