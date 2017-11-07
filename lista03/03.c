/*Recebe dois vetores (v1 e v2) e imprime a soma (v3)*/

#include <stdio.h>

int soma_vetores (int *v1, int *v2){
	for (int i=0;i<5;i++) {
	  int v3 = *v1 + *v2;
		v1++;
		v2++;
		printf("%d ",v3);
	}
}

int main () {
	int v1[5],v2[5],i;
	for(i=0;i<5;i++){
		scanf("%d", &v1[i]);
	}
	for(i=0;i<5;i++){
		scanf("%d", &v2[i]);
	}
	soma_vetores(&v1[0],&v2[0]);
  printf ("\n");
  return 0;
}