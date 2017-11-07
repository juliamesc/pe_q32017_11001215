/*Recebe uma string e a retorna invertida*/

#include <stdio.h>
#include <stdlib.h>

int inverter (char palavra[])
{
	int cont = 0;
	for(int i=0; palavra[i] != '\0'; i++){
		cont++;
	}
	return --cont;
}


int main(){
	char entrada[255];
	char saida[255];
	int cont, tamanho;
	fgets(entrada, 255, stdin);
	cont = inverter(entrada);	
	cont--;
	tamanho = cont;
	for(int i=0; i <= tamanho; i++){
		saida[i] = entrada[cont];
		cont--;
	}

	printf("%s\n", saida);
	return 0;
}