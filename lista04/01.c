#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto_3d {
float x;
float y;
float z;
} ponto_3d;

ponto_3d Deltaf(ponto_3d p1, ponto_3d p2)
{
    ponto_3d delta;
    delta.x=(p1.x-p2.x);
    delta.y=(p1.y-p2.y);
    delta.z=(p1.z-p2.z);
    return delta;
}

float soma_quadrados(ponto_3d delta)
{
    return (pow(delta.x,2.0)+pow(delta.y,2.0)+pow(delta.z,2.0));
}

float distancia( ponto_3d p1, ponto_3d p2)
{
    float distancia_p1p2;

    return sqrt(soma_quadrados(Deltaf(p1,p2)));
}

int main ()
{
    ponto_3d p1,p2;

    scanf ("%f , %f , %f" ,&(p1.x) , &(p1.y), &(p1.z) );
    scanf ("%f , %f , %f" ,&(p2.x) , &(p2.y), &(p2.z) );

    printf("%.2f", distancia(p1,p2));

    return 0;
}