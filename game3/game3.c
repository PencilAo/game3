#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***************************\n");
	printf("*******   1. play   *******\n");
	printf("*******   0. exit   *******\n");
	printf("***************************\n");
}
void game()
{
	int guess = 0;
	//int MIN = 1;
	//int MAX = 100;
	//srand((unsigned int)time(NULL));       //���Ը������������������һ��������֣�������������ֲ������ɵ������Ҳ���䣬���Կ��Խ�����������ָ�ʱ�����(ʱ���)time����,srand��Ҫһ��unsigned int����
	//����һ�������
	int a = rand()%100+1;    //%100+1������һ��1~100����     //����һ��������ĺ���  ������ķ�Χ��0`0x7fff,��0~32767,�����ɵ�����ÿ�����ж�һ��������Ҫ��һ��srand����
	//printf("%d\n", a);
	while (1)    //һֱѭ��
	{
		printf("������");
		scanf("%d", &guess);
		if (guess < a)
		{
			//MIN = guess;
			printf("��С��\n");
			//printf("%d\n", MIN);
		}
		else if (guess > a)
		{
			//MAX = guess;
			printf("�´�\n");
			//printf("%d\n", MAX);
		}
		else
		{
			printf("�¶�\n");
//			printf("%d\n", guess);
			break;
		}
	}
}
//ָ��
// int* p = NULL;
// int a = 0;
//NULL�൱��0
int main()
{
	srand((unsigned int)time(NULL));        //���Ҫ������������
	int input = 0;
	menu();
	printf("��ѡ��");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();   //�����ֵ������߼�
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("������1 or 0\n");
			break;
		}
	} while (input);
	return 0;