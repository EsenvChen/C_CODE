#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1
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



//����2

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
//	printf("���Ͱ�-%d\n", b);
//	return 0;
//}
 

//����3

//int main()
//{
//	int num = 1;
//	if (5 == num)//����һ�ֺõ�д��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


////����4���ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	//����
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}


//����5�����1-100֮�������
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


////����6��switch���
//#include <stdio.h>
////switch������ʾ
//int main()
//{
//	int day =0 ;
//	printf("������һ����\n");
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
//			printf("������1-7������\n");
//			break;
//	}
//	return 0;
//}


////����7
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
//		{//switch����Ƕ��ʹ��
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

//����8������Ļ�ϴ�ӡ1-10������
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


////����9�����������ӡ���
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

////����10�������������ַ���
//int main()
//{
//	char Password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", Password); //scanf ��ȡ�ı������ո��������
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
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



//����11��ֻ��ӡ����
#include <stdio.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			//�Աȵ�asci��ֵ
			continue;
		putchar(ch);
	}
	return 0;
}  