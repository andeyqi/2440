objs := head.o init.o serial.o main.o printf.o lib1funcs.o
CC_FLAG := -fno-builtin

uart.bin: $(objs)
	arm-linux-ld -Tuart.lds -o uart_elf $^ 
	arm-linux-objcopy -O binary -S uart_elf $@
	arm-linux-objdump -D -m arm uart_elf > uart.dis
	
%.o:%.c
	arm-linux-gcc -Wall -O0 -c -o $@ $< -g -std=gnu99 $(CC_FLAG)

%.o:%.S
	arm-linux-gcc -Wall -O0 -c -o $@ $< -g

clean:
	rm -f uart.bin uart_elf uart.dis *.o		
	