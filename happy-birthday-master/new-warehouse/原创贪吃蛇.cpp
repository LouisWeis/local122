#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
char arr[400];
void ai()
{
	;
}
void print()
{
	int j=0;
		for (;j<=399;j++)
	{
		printf("%c ",arr[j]);
		if ((j+1)%20==0)
		printf("\n");
	}
}
void game()
{
	srand((unsigned)time(NULL));
	system("cls");
	printf("���ڽ�����Ϸ.....");
	Sleep(5000);
	system("cls");
	int x;
	x=24;
	arr[x]='*';
		int j=0;
		print();
	
}
void print_board()
{
	int i=0;
	for (;i<=399;i++)
	{
		arr[i]=' ';
	}
	int i1=0,i2=1,i3=39,i4=381;
	for (;i1<=380;i1+=20)
	{
		arr[i1]='#';
	}
	for (;i2<=19;i2++)
	{
		arr[i2]='#';
	}
	for (;i3<=399;i3+=20)
	{
		arr[i3]='#';
	}
	for (;i4<=398;i4++)
	{
		arr[i4]='#';
	}
	int j=0;
	for (;j<=399;j++)
	{
		printf("%c ",arr[j]);
		if ((j+1)%20==0)
		printf("\n");
	 } 
}
int main ()
{
	int a;
	printf("$$$$$$$$$$��ӭ����̰������Ϸ$$$$$$$$$$\n");
	Sleep(500);
	printf("$$$$$$$$$$$ԭ�����ߣ�Τ��$$$$$$$$$$$$$\n");
		Sleep(500);
	print_board();
	printf("********1.PLAY**********2.EXIT********\n");
		Sleep(500);
	step1:
	printf("��ѡ��\n");
		Sleep(500);
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			game();
			break;
		case 2:
			printf("�����˳���Ϸ.....");
			Sleep(5000);
			break;
		default:
			printf("�������������ѡ�񣡣���\n");
			Sleep(2000);
			goto step1;
			break;
			
	}
	return 0;
}
