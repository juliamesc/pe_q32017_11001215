/* Calcula o volume dado altura, comprimento e largura
*/

#include <stdio.h>

float volume(float a, float b, float c) {
    return (a*b*c);
}

int main()    {
    float  num1, num2, num3;

    printf ("Entrada: ");
    scanf("%f %f %f", &num1, &num2,&num3);
    printf ("Saida: %.2f\n", volume(num1,num2,num3));

}