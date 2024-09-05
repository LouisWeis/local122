#include <stdio.h>
int main ()
{
	//int向后跳4个字节
	//char向后跳一个字节
	//指针类型决定了每一步走的步长 
	int a=0x11223344;
	int* pa=&a;
	char* pc=&a;
	printf("%p\n",pa);
		printf("%p\n",pa+1);
			printf("%p\n",pc);
				printf("%p\n",pc+1);
	return 0;
}
