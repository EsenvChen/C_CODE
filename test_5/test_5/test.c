#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//代码1
//int main()
//{  
//	int a = 0;
//	int b = 2;
//	if (a == 1) 
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//		
//	return 0;
//} 



//代码2

//int test() 
//{
//	int a = 3;
//		if (a == 3)
//		{
//			return 1; 
//		}
//		else
//		{
//			return 0;
//		}	
//}
//int main()
//{
//	int b = test();
//	printf("加油啊-%d\n", b);
//	return 0;
//}
 

//代码3

//int main()
//{
//	int num = 1;
//	if (5 == num)//这是一种好的写法
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


////代码4：判断一个数是否为奇数
//int main()
//{
//	//输入
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("不是奇数\n");
//	}
//
//	return 0;
//}


//代码5：输出1-100之间的奇数
//int main()
//{
//	int num = 1;
//
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d\n", num);
//		}
//		
//		num++;
//	}
//
//	return 0;
//}


////代码6：switch语句
//#include <stdio.h>
////switch代码演示
//int main()
//{
//	int day =0 ;
//	printf("请输入一个数\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("请输入1-7的数字\n");
//			break;
//	}
//	return 0;
//}


////代码7
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}  

//代码8：在屏幕上打印1-10的数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//if (i == 5)
//		//	break;
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;  
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


////代码9：键盘输入打印输出
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

////代码10：假设密码是字符串
//int main()
//{
//	char Password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", Password); //scanf 读取文本遇到空格会用问题
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	} 
//	else 
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}



//代码11：只打印数字
#include <stdio.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			//对比的asci码值
			continue;
		putchar(ch);
	}
	return 0;
}  