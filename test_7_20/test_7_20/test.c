#define _CRT_SECURE_NO_WARNINGS 1


//��д��������������ʱ���������ַ����ĳ��ȡ�
#include <stdio.h>
//int Strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + Strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
// }   


//��n�Ľ׳ˡ��������������

//int fx(int n)
//{
//	if (n <= 1) 
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fx(n - 1);
//	}
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fx(n);
//	printf("%d�Ľ׳���%d", n, ret);
//	return 0;
//}


//���n��쳲����������������������

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)//����n-3>=0����ָ˳�򣬶���ָҪ�ҵ���n����,��Ҫ����Ĵ������������������
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
// 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("��%d��쳲���������%d", n, ret);
//	return 0;
//}


//#include <stdio.h>
//
//// ���庺ŵ������
//void hanoi(int n, char A, char B, char C) {
//    if (n == 1) {
//        printf("��Բ�̴� %c �ƶ��� %c\n", A, C);
//    }
//    else {
//        hanoi(n - 1, A, C, B);
//        printf("��Բ�̴� %c �ƶ��� %c\n", A, C);
//        hanoi(n - 1, B, A, C);
//    }
//}
//
//int main() {
//    int n;
//    printf("�����뺺ŵ����Բ�̸�����");
//    scanf("%d", &n);
//
//    if (n <= 0) {
//        printf("������Ч��Բ�̸����������0��\n");
//        return 1;
//    }
//
//    printf("��ŵ���ƶ��������£�\n");
//    hanoi(n, 'A', 'B', 'C');
//
//    return 0;
//}




//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		if (i = 5) //���ﲻ���жϣ����Ǹ�ֵ��
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//void Swap(int* px, int* py) 
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//
//  
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c) 
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

// 
////շת����������Լ��
//
//int main() 
//{
//	int a = 0;//18
//	int b = 0;//24
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b) //�����жϴ�С�������Զ��жϴ�С������λ��
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
//




////9*9�˷���
//
//int main() 
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= 9; i++) 
//	{
//		for (j = 1; j <=i; j++) 
//		{
//			ret = i * j;
//			printf("%d*%d=%d\t", i, j, ret);
//			//printf("%d*%d=%-2d ", i, j, ret);//��Ӧ2λ��������ʾ���������Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//} 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(NULL)); // ʹ�õ�ǰʱ����Ϊ���������
    secretNumber = rand() % 100 + 1; // ���� 1 �� 100 ֮����������

    printf("��ӭ������������Ϸ��\n");
    printf("�� 1 �� 100 ֮�䣬�������λ���²����֡�\n");

    while (attempts < 3) {
        printf("��������Ĳ²⣺");
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("��ϲ��¶��ˣ��𰸾��� %d\n", secretNumber);
            break;
        }
        else if (guess < secretNumber) {
            printf("��С�ˣ�\n");
        }
        else {
            printf("�´��ˣ�\n");
        }

        attempts++;
    }

    if (attempts == 3) {
        printf("���ź�����û�в¶ԡ���ȷ���� %d\n", secretNumber);
    }

    return 0;
}
