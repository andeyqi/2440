#include "serial.h"

void printf (const char *fmt, ...);

int main()
{
    unsigned char c;
    uart0_init();   // 波特率115200，8N1(8个数据位，无校验位，1个停止位)
	// {
		// extern unsigned long __text_start, __text_end;
		// unsigned char* text_start = &__text_start;
		// unsigned char* text_end = &__text_end;
		
		// putint(&__text_start);
		
		// putint(&__text_end);
		
		// for(int i =0 ;i < 4;i++)
		// {
			// putc(text_start[i]);
		// }
		// for(int j =0 ;j < 4;j++)
		// {
			// putc(text_end[j]);
		// }
	// }
	printf("hello [%d] \n",888);
    while(1)
    {
        // 从串口接收数据后，判断其是否数字或子母，若是则加1后输出
        c = getc();
        if (isDigit(c) || isLetter(c))
            putc(c+1);
        puts("hello world \r\n");
    }

    return 0;
}
