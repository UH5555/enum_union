#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//枚举
//enum gender
//{
//	MALE = 2,//0
//	FEMALE,//1
//	SECRET = 8//2
//};
//
//int main()
//{
//	enum gender s = MALE;
//	enum gender a = 3;//int - error
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//联合（共用体） - 共用同一块空间
//
//union Un
//{
//	char c;//1
//	char d;
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//	printf("%p\n", &u);
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//
//	int ret = check_sys();
//
//	if (1 == *(char*)&a)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//	//int a = 0x11223344;
//	//低地址 ------------------------高地址
//	//......[][][][][11][22][33][44][][][][][].....  大端字节序存储模式
//	//......[][][][][44][33][22][11][][][][][].....  小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	return 0;
//}

union Un
{
	int a;
	char arr[5];
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	//联合体的大小是：
	//1、至少是最大成员的大小
	//2、当最大成员大小不是最大对齐数的整数倍时，要对其到最大对齐数的整数倍

	return 0;
}