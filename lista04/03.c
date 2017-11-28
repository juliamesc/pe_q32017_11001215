#include <stdio.h>
#include <stdlib.h>

typedef struct ficha {
	char nome[100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
} ficha;

void main (){
	FILE *fp, *fn;
	fp = fopen ("lista_alunos.txt", "r");
	fn = fopen ("media_alunos.txt", "w");
	ficha alunos[50];
	int i;
	for (i=0; i<50; i++){
	fscanf (arq, "\%s \%d \%f \%f %f",&alunos[i].nome, &alunos[i].ra ,&alunos[i].p1, &alunos[i].p2, &alunos[i].p3 );
	media = (alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
	fprintf (arq2, "\%s \%d %.2f\n",alunos[i].nome, alunos[i].ra, media );
	}

int fclose( FILE *fp );
int fclose( FILE *fn );
}