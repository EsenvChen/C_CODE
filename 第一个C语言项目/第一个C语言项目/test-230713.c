#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

// 写一个代码，计算2个整数的和

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	//输入2个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//} 

//int main()
//{
//	int lines = 0;
//	printf("要坚持学习哦");
//
//	while (lines < 200)
//	{
//	printf("坚持学习第%d天\n",lines);
//	lines++;
//	}
//	if (lines >= 200)
//	{
//		printf("恭喜你坚持了%d\n",lines);
//	}
//	else
//	{
//		printf("继续加油哦");
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&n1,&n2);
//
//	int sum = add(n1, n2);
//
//	printf("最后的结果是%d\n",sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = {10, 20, 30, 40, 50, 60, 70 };
//	for (i; i < 8; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main() {
//    puts("\x68\164\164\x70://c.biancheng.\x6e\145\060");
//    return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x < 0)
//		y = 1;
//
//	else if (x == 0)
//		y = 0;
//
//	else
//		y = -1;
//
//	printf("%d\n", y);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;

//代码1
void test()

{
int i = 0;
i++;
printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}

//代码2
void test()
{
	//static修饰局部变量
	static int i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
