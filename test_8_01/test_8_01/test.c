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
//	//a��ԭ��---
//	//00000000000000000000000000000101
//	//01111111111111111111111111111010
//	//01111111111111111111111111111011
//
//	//b��ԭ��
//	//00000000000000000000000001111110
//	//01111111111111111111111110000001
//	//-01111111111111111111111110000010
//	//-01111111111111111111111111111011
//
//	//�������
//	//-10000000000000000000000001111101
//
//	printf("%d\n", c);//�����-125
//	return 0;
//} 

////ɾ�������е�ָ����
//int main()
//{
//	//����һ������
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


////�ҵ�һ�������е������Сֵ�Ĳ�ֵ
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
//	//��ӡ�������������
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//�ҳ���Сֵ
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

////�����ĸ
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			//if(isalpha(ch))//�⺯��д��
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();// �������е�\n
//	}
//
//	return 0;
//}

////����ˮ�ɻ���
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