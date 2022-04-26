#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


void Monte_Carlo()
{
	printf("蒙特卡罗法：\n");
	int c = 0, d = 0, n = 100000;
	double x = 0, y = 0, z = 0;
	srand((unsigned)(time(NULL)));//生成随机数
	printf("本结果计算10次：\n");
	for (int j = 0; j < 10; j++)//迭代10次
	{
		for (int i = 0; i < n; ++i)
		{
			d += 1;
			x = (double)(rand()) / RAND_MAX;
			//printf("%lf\n", x);


			y = (double)(rand()) / RAND_MAX;
			//printf("%lf\n", y);

			z = (double)(rand()) / RAND_MAX;
			//printf("%lf\n", z);

			if ((pow(x, 2) + pow(y, 2)) >= (0.5 * 0.5))
			{
				c += 1;
			}
		}
		double ret = 1.0 * c / d;
		printf("剩余部分的质量为：%lf\n", ret);
	}
}


//被积函数

double f(double x)
{
	return cos(1 / (1 + pow(x, 2)));
}


//辛普森法

double Intergral(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(a) + (*f)(b);//y0+yn
	h = (b - a) / n;
	for (i = 0; i < n - 1; i += 2)
	{
		s += 4 * (*f)(a + h + 2 * (double)(i)*h);//累加4y1,4y3至4yn-1
	}
	for (i = 0; i < n - 2; i += 2)
	{
		s += 2 * (*f)(a + 2 * h + 2 * (double)(i)*h);//累加2y2,2y4至2yn-2
	}
	return s * (h / 3);
}




//蒙特卡罗随机掷点法

void Monte_Carlo_1()
{
	printf("蒙特卡罗法：\n");
	int c = 0, d = 0, n = 100000;
	double x = 0, y = 0, z = 0;
	srand((unsigned)(time(NULL)));
	printf("本结果计算10次：\n");
	for (int j = 0; j < 10; j++)//迭代10次
	{
		for (int i = 0; i < n; ++i)
		{
			d += 1;
			x = (double)(rand()) / RAND_MAX;
			y = (double)(rand()) / RAND_MAX;
			if (y <= 1.0/(1+pow(x,2)))
			{
				c += 1;
			}
		}
		double ret = 1.0 * c / d;
		printf("定积分结果为：%lf\n", ret);
	}
}