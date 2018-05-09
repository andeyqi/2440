#ifndef __SERIAL_H__
#define __SERIAL_H__

void uart0_init(void);
void putc(unsigned char c);
void puts(char* );
void putint(unsigned int);
unsigned char getc(void);
int isDigit(unsigned char c);
int isLetter(unsigned char c);

#endif
