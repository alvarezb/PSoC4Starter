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

//standard libraries
#include <project.h>

//personally written debugging libraries
#include <debugging.h>

int main()
{
	CyGlobalIntEnable; //required for the USB serial communication
	initSerial(); //set up the serial connection
	CyDelay(1000); //let everything settle
	println("hello world"); //test printing a message
	printNum(42.22, 3); //test printing and formatting a number
	print("\n\r"); //print a new line
    
	for(;;){
        //print a message and toggle the LED every 100ms
        println("Hi!");
        LED_Write(BUTTON_Read()); //toggle the LED
        CyDelay(100);
    }
}

/* [] END OF FILE */

