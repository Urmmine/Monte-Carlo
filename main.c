#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"



//���ؿ��޷���

int main()
{
	printf("12.7�⣺\n");
	Monte_Carlo();


	printf("12.8�⣺\n");
	double ret = Intergral(f,0,1);
	printf("����ɭ�����Ϊ��%lf\n", ret);
	Monte_Carlo_1();

	return 0;
}

