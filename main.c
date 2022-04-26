#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"



//蒙特卡罗方法

int main()
{
	printf("12.7题：\n");
	Monte_Carlo();


	printf("12.8题：\n");
	double ret = Intergral(f,0,1);
	printf("辛普森法结果为：%lf\n", ret);
	Monte_Carlo_1();

	return 0;
}

