#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "func.h"
#include "windows.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ����� ������ 
	double x, y, Z, B;
	int A, sum;
	printf("������ �: ");
	scanf("%lf", &x);
	printf("������ �: ");
	scanf("%lf", &y);
	printf("������ Z: ");
	scanf("%lf", &Z);
	// �������� ������� ��� ������� ������; ������� ��������� � func.cpp, �� ��� �� ������������� ����� ����������
	// func.h, ����� �� �� ����� ����� � "main" 
	// �� ������� � ������ ���� ���� int, � ������� � ���������� ������ ���������� ��� double, ������ ���������� int 
	A = (int)calcA(x, Z, y);
	B = calcB(x, y);
	// �������� ���������
	printf("A = %d\n", A);
	printf("B = %lf\n", B);
	// ������� ������ ����� ����� �, B
	int digit1 = getFirstDigit(A);
	int digit2 = getFirstDigit(B);
	// ������� �� ����� � �������� � �� �����
	sum = digit1 + digit2;
	printf("A and B first digit sum = %d", sum);	
	return 0;
}