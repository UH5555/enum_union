#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ö��
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

//���ϣ������壩 - ����ͬһ��ռ�
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
//	//����1����ʾС��
//	//����0����ʾ���
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
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//	//int a = 0x11223344;
//	//�͵�ַ ------------------------�ߵ�ַ
//	//......[][][][][11][22][33][44][][][][][].....  ����ֽ���洢ģʽ
//	//......[][][][][44][33][22][11][][][][][].....  С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
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
	//������Ĵ�С�ǣ�
	//1������������Ա�Ĵ�С
	//2��������Ա��С��������������������ʱ��Ҫ���䵽����������������

	return 0;
}