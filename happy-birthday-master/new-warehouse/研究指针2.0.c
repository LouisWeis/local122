#include <stdio.h>
int main ()
{
	int a;
	printf("������һ������\n");
	scanf("%d",&a);
	int *p;
	p=&a;
	printf("%p\n",*p);
	p++;
	printf("%p\n",*p);
	return 0;
}
