#include "stdserial.h"
#include "../types/types.h"

#ifdef PLATFORM_AVR
  #include "../io/avr_serial/serialprint.h"
#endif

void printfstr(char *str) {
	#ifdef PLATFORM_AVR
   printString(str); 
  #endif
}


void printfstrlen(char *str, uint8_t len) {
	#ifdef PLATFORM_AVR
	printStringN(str, len); 
  #endif
	
}


void printfval(uint8_t val) {
	#ifdef PLATFORM_AVR
	 usartPrint(val);
	#endif
}
