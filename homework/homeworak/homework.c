#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	if (y > x)
//	{
//		z = y;
//	}
//	if (y == x)
//	{
//		z = x;
//	}
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("hello,world\n");
//	scanf("%d%d",&a,&b);
//	printf("%d", Max(a, b));
//	return 0;
//}
//
//
//int main()
//{
//  typedef struct stu
//	{
//		char arr[20];
//		int b;
//	}stu,s2, s3;//---s2��s3Ϊȫ�ֱ���
//	 stu s1 = { "����",17 };
//	 printf("%s", s1.arr);----%sΪ�ַ�����%cΪ�����ַ�
//    return 0;
// }
// 
//
//int main()
//{
//  typedef struct stu
//	{
//		char arr[20];
//		int b;
//	}stu,s2, s3;//---s2��s3Ϊȫ�ֱ���
//	 stu s1 = { "����",17 };
//  typedef struct T
//	 {
//	     int n;
//		 stu s;
//		 int a;
//	 }T;
//    T t = { 1,{"����",18},666 };
//	printf("%d", t.s.b);
//	return 0;
//}
typedef struct str//����Ҫ��ʹ��ǰ
{
	char arr[20];
	int old;
	char sex[5];
}str;
void Print1(str n)
{
	printf("%s\n", n.arr);
	printf("%d\n", n.old);
	printf("%s\n", n.sex);
}
void Print2(str* n)
{
	printf("%s", n->arr);
	printf("%d", n->old);
	printf("%s", n->sex);
}
//typedef struct str
//{
//	char arr[20];
//	int old;
//	char sex[5];
//}a;
int main()
{
	str s = { "����",17,"��" };
	Print1(s);
	Print2(&s);
	return 0;
}