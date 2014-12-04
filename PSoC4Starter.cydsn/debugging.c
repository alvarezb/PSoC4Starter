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

#include <debugging.h>
#include <project.h>

void initSerial(){
	USB_Start();
}

void print(char* message){
	USB_UartPutString(message);
	//USB_UartPutCRLF(0x20);
}

void println(char* message){
	USB_UartPutString(message);
    USB_UartPutString("\n\r");
}

void printNum(float num, int precision){
	char strBuf[precision];
	gcvt(num, precision, strBuf);
	USB_UartPutString(strBuf);
	//USB_UartPutCRLF(0x20);
}

/* [] END OF FILE */
