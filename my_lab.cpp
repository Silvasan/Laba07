#include "my_lab.h"

double factorial(int a){
	double b = 1;
	for (int i = 1; i <= a; ++i) {
		b *= i;
	}
	return b;
}

double expa(double x, double epsilon) {
	int i = 1;
	double e = 1, b = INFINITY;
	while(b>=epsilon) {
		b = pow(x, i) / factorial(i);
		e += b;
		i++;
	}
	return e;
}
 //вместо экспоненты синус от икс и косинус от икс от эпсилонта