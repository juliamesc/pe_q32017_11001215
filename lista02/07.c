/* converte: temperatura (1 celsius, 2 fahrenheit, 3 kelvin), binario (1 decimal, 2 binario)
 */

#include <stdio.h>
#include <math.h>

 int conv_temp (int un2, float valor) {
    char unidade;

    switch (un2) {

        case 1 :
            valor*=5;
            unidade='C';
        break;

        case 2 :
            valor*=9;
            valor+=32;
            unidade='F';
        break;

        case 3 :
            valor*=5;
            valor+=273.14;
            unidade='K';
        break;

    }

    printf ("Saida: %.2f %c\n", valor, unidade);
 }

int temperatura (int un1,int un2, float valor){

    switch (un1){

        case 1 :
            valor/=5;
        break;

        case 2 :
            valor-=32;
            valor/=9;
        break;

        case 3 :
            valor-=273;
            valor/=5;
        break;

    }
    conv_temp(un2,valor);
}

int conversao(int conv, int un1, int un2, float valor){
    switch (conv) {

        case 1:
            temperatura(un1,un2,valor);
        break;

        case 2:
            binario(un1,un2,valor);
        break;

    }
}

 int main()    {
    int conv, un1, un2;
    float  valor;

    printf ("Entrada: ");
    scanf("%d %d %d %f",&conv,&un1,&un2,&valor);
    conversao(conv,un1,un2,valor);
}