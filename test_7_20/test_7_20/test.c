#define _CRT_SECURE_NO_WARNINGS 1


//编写函数不允许创建临时变量，求字符串的长度。
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


//求n的阶乘。（不考虑溢出）

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
//	printf("%d的阶乘是%d", n, ret);
//	return 0;
//}


//求第n个斐波那契数。（不考虑溢出）

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)//这里n-3>=0不是指顺序，而是指要找到第n个数,需要计算的次数。！！！个人理解
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
//	printf("第%d个斐波那契数是%d", n, ret);
//	return 0;
//}


//#include <stdio.h>
//
//// 定义汉诺塔函数
//void hanoi(int n, char A, char B, char C) {
//    if (n == 1) {
//        printf("将圆盘从 %c 移动到 %c\n", A, C);
//    }
//    else {
//        hanoi(n - 1, A, C, B);
//        printf("将圆盘从 %c 移动到 %c\n", A, C);
//        hanoi(n - 1, B, A, C);
//    }
//}
//
//int main() {
//    int n;
//    printf("请输入汉诺塔的圆盘个数：");
//    scanf("%d", &n);
//
//    if (n <= 0) {
//        printf("输入无效，圆盘个数必须大于0。\n");
//        return 1;
//    }
//
//    printf("汉诺塔移动步骤如下：\n");
//    hanoi(n, 'A', 'B', 'C');
//
//    return 0;
//}




//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		if (i = 5) //这里不是判断，而是赋值；
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
//	//输入
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
////辗转相除法求最大公约数
//
//int main() 
//{
//	int a = 0;//18
//	int b = 0;//24
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b) //不用判断大小，可以自动判断大小并交换位置
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
//




////9*9乘法表
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
//			//printf("%d*%d=%-2d ", i, j, ret);//答应2位，正负表示左对齐或者右对齐
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
    srand(time(NULL)); // 使用当前时间作为随机数种子
    secretNumber = rand() % 100 + 1; // 生成 1 到 100 之间的随机数字

    printf("欢迎来到猜数字游戏！\n");
    printf("在 1 到 100 之间，你有三次机会猜测数字。\n");

    while (attempts < 3) {
        printf("请输入你的猜测：");
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("恭喜你猜对了！答案就是 %d\n", secretNumber);
            break;
        }
        else if (guess < secretNumber) {
            printf("猜小了！\n");
        }
        else {
            printf("猜大了！\n");
        }

        attempts++;
    }

    if (attempts == 3) {
        printf("很遗憾，你没有猜对。正确答案是 %d\n", secretNumber);
    }

    return 0;
}
