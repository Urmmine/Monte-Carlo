#pragma once

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


#define N 100000



//��������

//���ؿ��޷���

void Monte_Carlo();


//��������


double f(double x);


//����ɭ��

double Intergral(double(*f)(double), double a, double b);


//���ؿ���������㷨

void Monte_Carlo_1();