#include <stdio.h>
int main ()
{
	//int�����4���ֽ�
	//char�����һ���ֽ�
	//ָ�����;�����ÿһ���ߵĲ��� 
	int a=0x11223344;
	int* pa=&a;
	char* pc=&a;
	printf("%p\n",pa);
		printf("%p\n",pa+1);
			printf("%p\n",pc);
				printf("%p\n",pc+1);
	return 0;
}
