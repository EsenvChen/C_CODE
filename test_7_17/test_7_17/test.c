#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////代码1:用asci打印
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//
//	//sizeof(arr) 计算的是数组的总大小，单位是字节；
//	//sizeof(arr[0]) 计算的是单个数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算的是数组的总个数
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}  


////代码3:输入输出年月日
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//
//	scanf("%4d%2d%2d",&year,&month,&date);
//
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//}
 

////代码4:按格式输出
//int main()
//{
//
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//
//	printf("学生NO. %d 的每科成绩是 %.2f , %.2f , %.2f.\n", id, c, math, eng);
//
//	return 0;
//}

 

////代码5:寻找最大值
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	int max = arr[0];
//	i = 1;
//	
//	while (i < 4 )
//	{
//		if (arr[i] > max) 
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}



////代码5:循环打印
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//for (i = 0; i < 3; i++) 
//{
//	for (j = 0; j < 3; j++)
//	{
//		printf("陈小花\n");
//	}
//}
//
//	return 0;
//}




//int main()
//{
//	////变种1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//变种2 
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//} 

//#include <stdio.h>
//
//int main() {
//    int x = 2;
//    printf("初始值 x = %d\n", x);
//    int result = (x = 2, ++x);
//    printf("表达式结果 result = %d\n", result);
//
//    return 0;
//}



////请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
////K=0,是赋值，条件为假，不会开始for循环



////代码：do  while循环？
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do 
//
//		if (i == 5)
//		{
//			continue;
//			printf("%d", i);
//			i++;
//		}
//	while (i <= 10);
//
//	return 0;
//}

////代码：计算 n的阶乘。？
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	float ret = 1.0f;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) 
//	{
//		ret = ret * i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}



////代码：计算 n的阶乘。？
//#include <stdio.h>
//int  fx(int n)
//{
//	int ret = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		int fact = fx(i);
//		sum += fact;
//	}
//
//	printf("1! + 2! + 3! + ... + 10! = %d\n", sum);
//
//
//	return 0;
//}

//
////代码：优化阶乘求和代码
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("1! + 2! + 3! + ... + 10! = %d\n", sum);
//	return 0;
//}

////代码：二分查找
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 17;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right http://www.yizhutiku.cn/h5/?tabType=qbank&qbankId=8= mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//	{
//		printf("找不到\n", mid);
//	}
//		
//	return 0;
//}



////代码：特定打印方式
//#include <stdlib.h>
//#include <windows.h>
//
//int main()
//{
//
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr1)/sizeof(arr1[@])-2;
//
//	while (left <= right)
//
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//
//				printf("%s\n", arr2);
//
//			return 0;



//代码作业复现：猜数字游戏

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play **********\n");
	printf("*********** 0.exit **********\n");
	printf("**********************************\n");
}
//TDD-测试驱动开发。
//RAND_MAX--rand函数能返回随机数的最大值（0-32767）。
void game()
{
	int random_num = rand() % 100 + 1;//一个数模100，余数是是0~99
	int input = 0;  
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//只再开始游戏的时候调用一次就行了
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误,请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}