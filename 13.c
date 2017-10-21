*/ Faz cálculo do mdc
*/

#include <stdio.h>
#include <math.h>

double calculo_mdc (int a, int b)
{
	if(b == 0) return a;
	return calculo_mdc(b, a%b);
}

int main()
{
	int a, b;
	double mdc;	
	scanf("%d %d", &a, &b);	
	mdc = calculo_mdc(a,b);
	printf("%.f\n", mdc); 

	return 0;
}