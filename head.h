#pragma once

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


#define N 100000



//函数声明

//蒙特卡罗方法

void Monte_Carlo();


//被积函数


double f(double x);


//辛普森法

double Intergral(double(*f)(double), double a, double b);


//蒙特卡罗随机掷点法

void Monte_Carlo_1();