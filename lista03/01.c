/*Conta o número de vogais de uma string*/

#include <stdio.h>
#include <stdlib.h>

int contador (char palavra[])
{
	int cont = 0;
	char letra;
	for(int i=0; palavra[i]!= '\0'; i++){		
		letra = palavra[i];
		if (letra == 'a' || letra == 'e' || letra == 'i'|| letra == 'o' || letra == 'u'){
			cont++;
		}
	}
	return cont;
}

int main(){
	char palavra[255];
	fgets(palavra, 255, stdin);
	printf("%d\n", contador(palavra));
	return 0;
}