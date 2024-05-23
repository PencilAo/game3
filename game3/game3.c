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
	//srand((unsigned int)time(NULL));       //可以根据括号里的数字生成一个随机数字，但括号里的数字不变生成的随机数也不变，所以可以将括号里的数字跟时间关联(时间戳)time函数,srand需要一个unsigned int类型
	//生成一个随机数
	int a = rand()%100+1;    //%100+1后生成一个1~100的数     //生成一个随机数的函数  随机数的范围是0`0x7fff,即0~32767,但生成的数字每次运行都一样，所以要用一个srand函数
	//printf("%d\n", a);
	while (1)    //一直循环
	{
		printf("猜数字");
		scanf("%d", &guess);
		if (guess < a)
		{
			//MIN = guess;
			printf("猜小了\n");
			//printf("%d\n", MIN);
		}
		else if (guess > a)
		{
			//MAX = guess;
			printf("猜大\n");
			//printf("%d\n", MAX);
		}
		else
		{
			printf("猜对\n");
//			printf("%d\n", guess);
			break;
		}
	}
}
//指针
// int* p = NULL;
// int a = 0;
//NULL相当于0
int main()
{
	srand((unsigned int)time(NULL));        //这个要放主函数里面
	int input = 0;
	menu();
	printf("请选择");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();   //猜数字的整个逻辑
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("请输入1 or 0\n");
			break;
		}
	} while (input);
	return 0;