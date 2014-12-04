PSoC4Starter
============

Sample project for getting started with a CY8CKIT-049

FIRST: READ THE [GETTING STARTED GUIDE](http://www.cypress.com/?docID=48142) (or at least know it exists and is a good reference).

To get started, make sure you have downloaded the [PSoC Creator](http://www.cypress.com/psoccreator/) and the [Cypress USB Drivers](http://www.cypress.com/?rID=83110). You may need to create a free Cypress account. They dont spam you (or have never spammed me).

Next open the project in PSoC Creator. You shouldn't need to do anything too fancy. Next, open TopDesign.cysch and verify the bootloadable component can see the .hex and .elf sources (double click on it, then go to the dependencies tab). If not, they are in the root of this directory.

To load the file onto your CY8CKIT-049, start by building the project ("build" menu then "build PSoC4Starter", or the similar icon in the top left.) Once that succeeds, HOLD DOWN THE BUTTON on your PCB while you insert it into the USB slot. The button must be held down when the board powers on to enter bootloader mode.

The standard "program" and "debug" buttons do not work with the USB-serial bridge, so we need to go to "tools" menu then open "Bootloader host." Once that is opened, point it to the built file. This is not obvious, but it is located in PSoC4Starter\PSoC4Starter.cydsn\CortexM0\ARM_GCC_473\Debug\PSoC4Starter.cyacd (or something similar). Then click on the COM port to start connecting to it. Once it un-freezes, select "115200" as the connection speed. Then hit program, and it will load onto your PSoC!

At this point it will execute whatever you have written in the main.c file. If you have not changed it, the default example I wrote should turn on the LED whenever you press the button.

Now, go play with it!