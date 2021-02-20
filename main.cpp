#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_lab.h"
/*Напишите программу, которая вычисляет значение e^x по формуле e^x = 1 + x/1! + x^2/2! + x^3/3! + ... для введенных x и точности epsilon.
*/
int main(){
	double x = 0;
	double epsilon = 0;
	if (scanf("%lf", &x) != 1)
		return printf("wrong value x");
	if (scanf("%lf", &epsilon) != 1)
		return printf("wrong value eps");
	printf("Result: %lf", expa(x, epsilon));
	getchar();
	return 0;
}