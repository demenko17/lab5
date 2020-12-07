#include "func.h"
// calcA, calcB - просто расчет по формуле
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

// находим первую цифру числа
int getFirstDigit(int num) {
	int digitNum = 0; // тут храним кол-во делений на 10
	long tmp = num; // временная переменная, тут храним копию числа num
	while (tmp /= 10) // начинаем делить tmp и делим до тех пор, пока это возможно (пока в tmp не будет 1-цифровое число)
		digitNum++;
	// если не произошло ни одной операции деления (то есть число num - одноцифровое) 
	if (digitNum == 0)
		return num; // возращаем число num как результат работы функции
	else
		// иначе делим num на 10 в степени digitNum
		// пр: num = 1423, digitNum = 3 
		// num / pow(10, digitNum) = 1423 / 1000 = 1
		return num / pow(10, digitNum); 
}