/* ========================================
 * Written by Brian Alvarez at MIT
 * December 3rd, 2014
 *
 * This is released into the public domain
 * Feel free to use it however you want
 * 
 * If this sample has been helpful to you,
 * please share it with others.
 *
 * ========================================
*/

#ifndef __DEBUGGING_H__
#define __DEBUGGING_H__
    
#include <stdlib.h>

void initSerial();
void print(char* s);
void println(char* s);
void printNum(float num, int precision);

#endif
