#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1:��asci��ӡ
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//
//	//sizeof(arr) �������������ܴ�С����λ���ֽڣ�
//	//sizeof(arr[0]) ������ǵ�������Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������������ܸ���
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}  


////����3:�������������
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
 

////����4:����ʽ���
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
//	printf("ѧ��NO. %d ��ÿ�Ƴɼ��� %.2f , %.2f , %.2f.\n", id, c, math, eng);
//
//	return 0;
//}

 

////����5:Ѱ�����ֵ
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



////����5:ѭ����ӡ
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//for (i = 0; i < 3; i++) 
//{
//	for (j = 0; j < 3; j++)
//	{
//		printf("��С��\n");
//	}
//}
//
//	return 0;
//}




//int main()
//{
//	////����1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//����2 
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
//    printf("��ʼֵ x = %d\n", x);
//    int result = (x = 2, ++x);
//    printf("���ʽ��� result = %d\n", result);
//
//    return 0;
//}



////����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
////K=0,�Ǹ�ֵ������Ϊ�٣����Ὺʼforѭ��



////���룺do  whileѭ����
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

////���룺���� n�Ľ׳ˡ���
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



////���룺���� n�Ľ׳ˡ���
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
////���룺�Ż��׳���ʹ���
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

////���룺���ֲ���
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
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n", mid);
//	}
//		
//	return 0;
//}



////���룺�ض���ӡ��ʽ
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
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//
//				printf("%s\n", arr2);
//
//			return 0;



//������ҵ���֣���������Ϸ

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
//TDD-��������������
//RAND_MAX--rand�����ܷ�������������ֵ��0-32767����
void game()
{
	int random_num = rand() % 100 + 1;//һ����ģ100����������0~99
	int input = 0;  
	while (1)
	{
		printf("������µ�����>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//ֻ�ٿ�ʼ��Ϸ��ʱ�����һ�ξ�����
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����,����������!\n");
			break;
		}
	} while (input);
	return 0;
}