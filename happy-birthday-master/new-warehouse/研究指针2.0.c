#include <stdio.h>
int main ()
{
	int a;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	int *p;
	p=&a;
	printf("%p\n",*p);
	p++;
	printf("%p\n",*p);
	return 0;
}
