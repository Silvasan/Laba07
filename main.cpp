#include <stdio.h>
#include "my_lab.h"
/*Напишите программу, которая вычисляет значение e^x по формуле e^x = 1 + x/1! + x^2/2! + x^3/3! + ... для введенных x и точности epsilon.
*/
int main(){
	double x = 0;
	int epsilon = 0;
	char buffer = 0;
	while (1) {
		printf("Enter x:");
		scanf("%lf", &x);
		if (getchar() != '\n') {
			printf("Please, try again\n");
			do {
				buffer = getchar();
			} while (buffer != '\n');
			continue;
		}
		else break;
	}
	while (1) {
		printf("Enter epsilon:");
		scanf("%d", &epsilon); 
		if (getchar() != '\n') {
			do {
				buffer = getchar();
			} while (buffer != '\n');
			printf("Please, try again\n");
			continue;
		}
		else break;
	}
	printf("Result: %.*lf", epsilon, exp(x, epsilon));
	getchar();
	return 0;
}