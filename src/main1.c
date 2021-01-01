#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void test01()
{
	char ch;
	printf("sizeof(ch)=%d\n", sizeof(ch));
	int num;
	printf("sizeof(num)=%d\n", sizeof(num));
}

int main(int argc, char *argv[])
{
	test01();
	system("pause");
	return 0;
}
