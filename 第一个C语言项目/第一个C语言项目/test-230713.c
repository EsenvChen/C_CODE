#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

// дһ�����룬����2�������ĺ�

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//	//����2������
//	scanf("%d %d", &num1, &num2);
//	//���
//	int sum = num1 + num2;
//	//���
//	printf("%d\n", sum);
//	return 0;
//} 

//int main()
//{
//	int lines = 0;
//	printf("Ҫ���ѧϰŶ");
//
//	while (lines < 200)
//	{
//	printf("���ѧϰ��%d��\n",lines);
//	lines++;
//	}
//	if (lines >= 200)
//	{
//		printf("��ϲ������%d\n",lines);
//	}
//	else
//	{
//		printf("��������Ŷ");
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
//	printf("����������������\n");
//	scanf("%d %d",&n1,&n2);
//
//	int sum = add(n1, n2);
//
//	printf("���Ľ����%d\n",sum);
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

//����1
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

//����2
void test()
{
	//static���ξֲ�����
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
