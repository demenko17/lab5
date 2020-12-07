#pragma once
#define _USE_MATH_DEFINES // для числа пи, числа е и других
#include <cmath>

#define CONVERT M_PI / 180
// это наш "интерфейс" - перечень операций (функций), которые доступнны
//  в func.cpp находится реализация этих функций
double calcA(double x, double Z, double y);
double calcB(double x, double y);
int getFirstDigit(int num);