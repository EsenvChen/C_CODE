#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//typedef unsigned int uint;
//
//int main()
//{
///*unsigned int �� C �����е��޷��������������ͣ����������޷�����������������ʾһ���Ǹ���������
//���������������unsigned int ��ȡֵ��Χ�Ǵ� 0 �������������ȡ���ھ���ı�������ϵͳƽ̨��*/
//
//	unsigned int num1 = 1;
//	uint num2 = 2;
//
//
//	return 0;
//}


////define�����ʶ������
//#define MAX 1000
////define�����
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//} 


//int main()
//{
//	int num = 10;
//	&num;//ȡ��num�ĵ�ַ
//	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
//	return 0;
//}\


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

struct stu
{
	char name[20];
	int age;
	char sex[5];
	char tel[15];
};

void print(struct stu* ps)
{
	//printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tel);
	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tel);
};

int main()
{
	struct stu s = {"����", 20, "��", "20180101"};
	/*printf("%s %d %s %s",s.name,s.age,s.sex,s.tel);*/
	print(&s);
	return 0;
}  