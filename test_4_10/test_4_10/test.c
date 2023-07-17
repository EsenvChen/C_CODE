#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//typedef unsigned int uint;
//
//int main()
//{
///*unsigned int 是 C 语言中的无符号整型数据类型，用于声明无符号整数变量。它表示一个非负的整数，
//包括零和正整数。unsigned int 的取值范围是从 0 到最大正整数，取决于具体的编译器和系统平台。*/
//
//	unsigned int num1 = 1;
//	uint num2 = 2;
//
//
//	return 0;
//}


////define定义标识符常量
//#define MAX 1000
////define定义宏
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
//	&num;//取出num的地址
//	printf("%p\n", &num);//打印地址，%p--以地址的形式打印
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
	struct stu s = {"张三", 20, "男", "20180101"};
	/*printf("%s %d %s %s",s.name,s.age,s.sex,s.tel);*/
	print(&s);
	return 0;
}  