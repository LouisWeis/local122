#include <stdio.h>
#include <windows.h>
char arr[64];
void game ()
{
	srand((unsigned)time(NULL));
	int a=0;
	a=rand()%64;
	int b=0;
	b=a-a%4;
	arr[b]='2';
	printf("%d\n",b); 
	print_board(); 
}
void print_board()
{
	int i=0;
	for (;i<4;i++)
	{
		printf("|----|----|----|----|\n");
		int j = 0;
		for (;j<4;j++)
		{
			printf("|%c%c%c%c",arr[i+4*j],arr[i+1+4*j],arr[i+2+4*j],arr[i+3+4*j]);
		}
		printf("|\n");
	}
	printf("|----|----|----|----|\n");
} 
int main ()
{
	int x=0;
for (;x<64;x++)
{
	arr[x]=' ';
}
    printf("***��ӭ����2048��Ϸ***\n");
	print_board();
	printf("1.��ʼ��Ϸ  2.�˳���Ϸ\n");
	step1:
	printf("��ѡ��->\n");
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��......\n");
			Sleep(5000);
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			goto step1;			
	}
	return 0;
}

