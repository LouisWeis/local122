#include <stdio.h>
int main ()
{
	int a=0x11223344;//����16����λռһ���ֽڿռ�
	//int *pa=&a; 
	//*pa=0;
	char* pc=&a;
	*pc=0;
	//printf("%p\n",pa);
	printf("%p\n",pc);//%pת��ַת���ַ� 
	return 0;
}
