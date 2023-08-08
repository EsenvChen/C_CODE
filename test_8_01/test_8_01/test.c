#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//
//{
//	int a = 3;
//	int b = 0;
//	b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}  


//int 4byte 32bit
//char 1byte 8bit
//int main()
//{
//	char a = 5;
//	char b = 126;
//	char c = a + b;
//
//	//a的原码---
//	//00000000000000000000000000000101
//	//01111111111111111111111111111010
//	//01111111111111111111111111111011
//
//	//b的原码
//	//00000000000000000000000001111110
//	//01111111111111111111111110000001
//	//-01111111111111111111111110000010
//	//-01111111111111111111111111111011
//
//	//补码相加
//	//-10000000000000000000000001111101
//
//	printf("%d\n", c);//输出是-125
//	return 0;
//} 

////删除数组中的指定数
//int main()
//{
//	//输入一个整数
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//
//	int del = 0;
//	scanf("%d", &del);
//
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


////找到一组数列中的最大最小值的差值
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int arr[10000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//打印所有输入的数字
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//找出最小值
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//
//	printf("%d\n", max - min);
//	return 0;
//}

////检测字母
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			//if(isalpha(ch))//库函数写法
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();// 消除换行的\n
//	}
//
//	return 0;
//}

////变种水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//
//		if (sum == i)
//		{
//			printf("%d = ", sum);
//			for (j = 1; j <= 4; j++)
//			{
//				int k = (int)pow(10, j);
//				printf("%d * %d ", (sum / k), (sum % k));
//				if (j <= 3) 
//				{
//					printf("+");
//				}
//			}
//			printf("\n");
//			printf("so %d is Lily Nmuber\n", i);
//		}
//
//	}
//	return 0;
//}