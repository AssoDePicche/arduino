FILENAME        =
BAUD            = 115200
USB_PORT        = COM3
DEVICE          = atmega328p
PROGRAMMER      = arduino
COMPILER        = avr-gcc
COMPILER_FLAGS  = -Wall -Os -mmcu=$(DEVICE)
COMPILE_COMMAND = $(COMPILER) $(COMPILER_FLAGS)

default: compile upload clean

compile:
	$(COMPILE_COMMAND) -c $(FILENAME).c -o $(FILENAME).o
	$(COMPILE_COMMAND) -o $(FILENAME).elf $(FILENAME).o
	avr-objcopy -j .text -j .data -O ihex $(FILENAME).elf $(FILENAME).hex
	avr-size $(FILENAME).elf

upload:
	avrdude -v -p $(DEVICE) -F -V -c $(PROGRAMMER) -P $(USB_PORT) -b $(BAUD) -U flash:w:$(FILENAME).hex:i

clean:
	rm -f src/*/*.o
	rm -f src/*/*.elf
	rm -f src/*/*.hex
