#pragma once
#define _USE_MATH_DEFINES // ��� ����� ��, ����� � � ������
#include <cmath>

#define CONVERT M_PI / 180
// ��� ��� "���������" - �������� �������� (�������), ������� ���������
//  � func.cpp ��������� ���������� ���� �������
double calcA(double x, double Z, double y);
double calcB(double x, double y);
int getFirstDigit(int num);