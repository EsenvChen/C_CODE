#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	} 
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//t arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6};
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0; 
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//// 冒泡排序
////方法1：
//#include <stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗？错误，传入的是数组第一个元素的地址
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

   
////数组名是什么？
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}