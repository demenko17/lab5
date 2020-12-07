#include "func.h"
// calcA, calcB - ������ ������ �� �������
double calcA(double x, double Z, double y)
{
	return (3 + pow(M_E, y - 1)) / 
		(1 + x * x * abs(y - tan(CONVERT * Z)))
		- tan(CONVERT * 155);
}

double calcB(double x, double y)
{
	return 1 + pow(y - x, 1/3) 
		+ pow(y - x, 2) / 2 
		+ pow(abs(y - x), 3) / 3;
}

// ������� ������ ����� �����
int getFirstDigit(int num) {
	int digitNum = 0; // ��� ������ ���-�� ������� �� 10
	long tmp = num; // ��������� ����������, ��� ������ ����� ����� num
	while (tmp /= 10) // �������� ������ tmp � ����� �� ��� ���, ���� ��� �������� (���� � tmp �� ����� 1-�������� �����)
		digitNum++;
	// ���� �� ��������� �� ����� �������� ������� (�� ���� ����� num - ������������) 
	if (digitNum == 0)
		return num; // ��������� ����� num ��� ��������� ������ �������
	else
		// ����� ����� num �� 10 � ������� digitNum
		// ��: num = 1423, digitNum = 3 
		// num / pow(10, digitNum) = 1423 / 1000 = 1
		return num / pow(10, digitNum); 
}