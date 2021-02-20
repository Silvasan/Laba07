#include "my_lab.h"

int factorial(int a){
	int b = 1;
	for (int i = 1; i <= a; ++i) {
		b *= i;
	}
	return b;
}

double exp(double x, int epsilon) {
	int i = 1;
	double e = 1;
	for ( i; i <= (x + epsilon); i++) {
		e = e + pow(x, i) / factorial(i);
	}
	return e;
}
 