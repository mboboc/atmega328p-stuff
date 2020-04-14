# atmega328p-stuff

##### Install tools needed for compilation and upload
*Linux*:
	`sudo apt-get install gcc-avr avr-libc avrdude`

##### Compile binary for atmega328p

	`avr-gcc -Wall -mmcu=atmega328p -Os -DF_CPU=12000000 -o blinky-led.bin blinky-led.c`

##### Generate .hex file for atmega328p

	`avr-objcopy -j .text -j .data -O ihex blinky-led.elf blinky-led.hex`

##### Burn the .hex on microcontroller

	`avrdude -c arduino -p atmega328p -U flash:w:main.hex:i -P usb`




Very useful link: https://blog.podkalicki.com/how-to-compile-and-burn-the-code-to-avr-chip-on-linuxmacosxwindows/

https://www.instructables.com/id/Arduino-on-all-sorts-of-Atmels/

https://www.instructables.com/id/Programming-ATMEGA32-or-Any-Other-AVR-Using-Arduin/

https://forum.arduino.cc/index.php?topic=125248.0

avrdude -P /dev/ttyUSB0 -c avrisp -p atmega324p -U flash:w:main.hex

avrdude -P /dev/ttyUSB0 -b 19200 -c avrisp -p atmega324p -U flash:w:main.hex

avrdude -c avrisp -P USB -p atmega324pa -U hfuse:w:0x90:m -U lfuse:w:0xde:m

avrdude -P /dev/ttyUSB0 -c arduino -p atmega324p -U flash:w:main.hex

https://www.youtube.com/watch?v=_ZL-YNOH_jA

Alex Banu
https://www.ladyada.net/learn/avr/avrdude.html
http://heliosoph.mit-links.info/arduinoisp-reading-writing-fuses-atmega328p/
http://eleccelerator.com/fusecalc/fusecalc.php?chip=atmega328p

// show fuse
avrdude -c avrisp /dev/ttyUSB0 -b 19200 -p atmega324pa -U hfuse:r:-:i -U lfuse:r:-:i

https://embedds.com/all-you-need-to-know-about-avr-fuses/

avr-gcc -Wall -mmcu=atmega324a -Os -DF_CPU=1000000 -o blinky-led.bin blinky-led.c

avrdude -c avrisp /dev/ttyUSB0 -b 19200 -p atmega324pa -U flash:w:blinky-led.hex:i

avrdude -carduino -P /dev/ttyUSB0 -b 1200 -p atmega324pa -U flash:w:blinky-led.hex:m -V -v

avrdude -carduino -P /dev/ttyUSB0 -b 1200 -p atmega324pa -U flash:w:"blinky-led.hex":i -V -v

---
Comenzi care merg

avr-gcc -Wall -mmcu=atmega324pa -Os -DF_CPU=1000000 -o blinky-led.bin blinky-led.c
avr-objcopy -j .text -j .data -O ihex blinky-led.bin blinky-led.hex 
avrdude -carduino -P /dev/ttyUSB0 -b 1200 -p atmega324pa -U flash:w:blinky-led.hex:i -V -v -F