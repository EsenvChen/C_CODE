#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
////�����ַ�����whileʵ�֣�
// 
//int main()
//
//{
//	char arr[] = "abcdef";//[a b c d e f \0]�����sizeof���� ���Ǽ����7
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}


////�����ַ������ݹ�ʵ�֣�
//
//int my_strlen(char* str)//�Լ�д�����ַ������ȵĺ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//
//	*(str + len - 1) = tmp;//����C����-11�����ͼ�����
//}  
//
//int main()
//
//{
//	char arr[] = "abcdefghijklmn";//[a b c d e f \0]�����sizeof���� ���Ǽ����7
//
//	reverse(arr); 
//	printf("%s\n", arr);
//	return 0;
//}


////�����ַ������ݹ�ʵ��-�����ַ�����
//
//int my_strlen(char* str)//�Լ�д�����ַ������ȵĺ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char arr[], int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if (left<right)
//	{
//		reverse(arr,left+1,right-1);
//	}
//	return arr;
//}  
//
//int main()
//
//{
//	char arr[] = "abcdefghijklmn";//[a b c d e f \0]�����sizeof���� ���Ǽ����7
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr,left,right); 
//
//	printf("%s\n", arr);
//	return 0;
//}


////����ÿλ֮��
//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//	{
//		return DigitSum(n/10) + n % 10;//����������� ��������
//	}
//	else
//		return n;
//}
//
//int main()
//
//{
//	unsigned int n = 0;
//	scanf("%u\n", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//} 



////����n��K�η�
//
//double Pow(int n, int k)
//{
//	if (k > 0) 
//		return n * Pow(n, k - 1);
//	else if (k == 0) 
//		return 1;
//	else
//		return 1/Pow(n, -k);
//}
//
//
//int main()
//
//{
//	while (1) 
//	{
//		int n = 0;
//		int k = 0;
//
//		scanf("%d %d", &n, &k);
//		double ret = Pow(n, k);
//		printf("%.2lf\n", ret);
//	}
//	return 0;
//}   


////�ڼ�λ쳲���������
//
//int Fib(int n)
//{
//	if (n == 1 || n ==2)
//		return 1;
//	if(n>2)
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//
//{
//	while (1) 
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int ret = Fib(n);
//		printf("��%dλ쳲���������%d\n",n, ret);
//	}
//	return 0;
//}   


//Ԫ�����齻��,���齻����Ҫ��ѭ��d
int main()

{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };

	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	for (i = 0; i < sz; i++)
	{ 
		printf("%d ", arr2[i]);
	}
	return 0;
}   