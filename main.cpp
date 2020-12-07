#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "func.h"
#include "windows.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ввели данные 
	double x, y, Z, B;
	int A, sum;
	printf("Введіть х: ");
	scanf("%lf", &x);
	printf("Введіть у: ");
	scanf("%lf", &y);
	printf("Введіть Z: ");
	scanf("%lf", &Z);
	// вызываем функции для расчета формул; функции находятся в func.cpp, но для их использования нужно подключить
	// func.h, иначе их не будет видно в "main" 
	// по задания А должно быть типа int, а функция в результате работы возвращает тип double, потому используем int 
	A = (int)calcA(x, Z, y);
	B = calcB(x, y);
	// печатаем результат
	printf("A = %d\n", A);
	printf("B = %lf\n", B);
	// находим первые цифры чисел А, B
	int digit1 = getFirstDigit(A);
	int digit2 = getFirstDigit(B);
	// находим их сумму и печатаем её на экран
	sum = digit1 + digit2;
	printf("A and B first digit sum = %d", sum);	
	return 0;
}