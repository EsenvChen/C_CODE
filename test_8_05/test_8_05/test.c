#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	//将a的地址存放在p变量中，p就是一个之指针变量。
//	return 0;
//}


//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	p++;
//	//}
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p+i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9]);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//		//printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//返回二进制数中1的个数 


////打印X图形
//
//int main()
//{
//	int n = 0; 
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}  

//int main()
//{
//	char* p = "hello bit.";
//	printf("%s\n", p);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

////第一次代码
// void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}


////第二次代码
// void my_strcpy(char* dest, char* src)
//{
//	 while (*dest++ = *src++)
//	 {
//		 ;
//	 }
//}


////第三次代码
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;  
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXXXXXXX";
//	char arr2[] = "woaichenkexin";
//
//	//char* p = NULL;
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "wo ai chenkexin";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}