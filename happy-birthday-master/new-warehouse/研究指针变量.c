#include <stdio.h>
int main ()
{
	char arr[10];
	int j=0;
	for (;j<=9;j++)
	{
		printf("ÇëÊäÈë£º\n");
		scanf("%c",&arr[j]);
	}
	char *p;
	int i=0;
	p=arr;
	for(;i<=9;i++)
	{
	printf("%c",p+i);	
	}
	return 0;
}
