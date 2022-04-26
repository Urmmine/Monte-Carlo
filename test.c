#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


void Monte_Carlo()
{
	printf("���ؿ��޷���\n");
	int c = 0, d = 0, n = 100000;
	double x = 0, y = 0, z = 0;
	srand((unsigned)(time(NULL)));//���������
	printf("���������10�Σ�\n");
	for (int j = 0; j < 10; j++)//����10��
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
		printf("ʣ�ಿ�ֵ�����Ϊ��%lf\n", ret);
	}
}


//��������

double f(double x)
{
	return cos(1 / (1 + pow(x, 2)));
}


//����ɭ��

double Intergral(double(*f)(double), double a, double b)
{
	double s, h;
	int n = N;
	int i = 0;
	s = (*f)(a) + (*f)(b);//y0+yn
	h = (b - a) / n;
	for (i = 0; i < n - 1; i += 2)
	{
		s += 4 * (*f)(a + h + 2 * (double)(i)*h);//�ۼ�4y1,4y3��4yn-1
	}
	for (i = 0; i < n - 2; i += 2)
	{
		s += 2 * (*f)(a + 2 * h + 2 * (double)(i)*h);//�ۼ�2y2,2y4��2yn-2
	}
	return s * (h / 3);
}




//���ؿ���������㷨

void Monte_Carlo_1()
{
	printf("���ؿ��޷���\n");
	int c = 0, d = 0, n = 100000;
	double x = 0, y = 0, z = 0;
	srand((unsigned)(time(NULL)));
	printf("���������10�Σ�\n");
	for (int j = 0; j < 10; j++)//����10��
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
		printf("�����ֽ��Ϊ��%lf\n", ret);
	}
}