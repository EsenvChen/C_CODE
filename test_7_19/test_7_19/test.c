#define _CRT_SECURE_NO_WARNINGS 1

///* memset example */
//#include <stdio.h>
//#include <string.h>
//
////int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '+', 6);
//	puts(str);
//	return 0;
//}
//
//
//#include <stdio.h>
////get_max函数的设计 
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}


//#include <stdio.h>
////写一个函数可以交换两个整形变量的内容。
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2; 
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}


#include <stdio.h>
int main()
{
	printf("%d\n", 43);
	printf("-------");

	printf("%d\n", printf("%d\n", printf("\n%d\n", 43)));
	//结果是啥？
	return 0;
}
