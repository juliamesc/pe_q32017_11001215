/*faz a transposta de uma matriz 3x3*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int linha_1[3]={0}, linha_2[3]={0}, linha_3[3]={0};
	
	scanf("%d %d %d", &linha_1[0], &linha_1[1], &linha_1[2]);
	scanf("%d %d %d", &linha_2[0], &linha_2[1], &linha_2[2]);
	scanf("%d %d %d", &linha_3[0], &linha_3[1], &linha_3[2]);
	
	for(int i=0; i<=2; i++){
		printf("%d %d %d\n", linha_1[i], linha_2[i], linha_3[i]);
	}
	return 0;
}