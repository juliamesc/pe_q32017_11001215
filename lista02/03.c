/* Calcula PI com 20 casas decimais por Lagrange
 */

#include <stdio.h>
#include <math.h>

double pi(int n) {
	double a1=1.0, a=1.0, b=1.0/sqrt(2.0), t=1.0/4.0, p=1.0;
	int i;
	for(i=0; i<n; i++) {
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(pow((a-a1),2.0));
		p = 2.0*p;
		a = a1;
	}
	return pow(a+b,2)/(4*t);
}

int main() {
	printf("O valor de pi é: %.20f\n", pi(20));
}