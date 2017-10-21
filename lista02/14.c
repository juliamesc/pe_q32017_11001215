*/ conferir se é palíndromo
*/

#include <stdio.h>
#include <math.h>

int palindromo (int a, int b)
{
	if(a < 1) return b;
	b *= 10;
	return palindromo(a/10, b + (a%10));
}

int main()
{	
	int a, invertido;
	scanf("%d", &a);
	invertido = palindromo(a, 0);
	if (a == invertido){
		printf("sim\n");
	}
	else {
		printf("nao\n");
	}
	return 0;
}