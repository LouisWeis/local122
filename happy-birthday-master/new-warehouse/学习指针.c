#include <stdio.h>
int main ()
{
	int a=0x11223344;//两个16进制位占一个字节空间
	//int *pa=&a; 
	//*pa=0;
	char* pc=&a;
	*pc=0;
	//printf("%p\n",pa);
	printf("%p\n",pc);//%p转地址转义字符 
	return 0;
}
