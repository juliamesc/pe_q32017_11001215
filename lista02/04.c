/* calculadora com 5 opções: 1 soma, 2 subtração, 3 multiplicação, 4 divisão, 5 potência
 */

#include <stdio.h>
#include <math.h>

float soma (float num1, float num2) {
    return num1+num2;
}

float sub (float num1, float num2) {
    return num1-num2;
}

float mult (float num1, float num2) {
    return num1*num2;
}

float div (float num1, float num2) {
    return num1/num2;
}

float pot (float num1, float num2) {
    return pow(num1,num2);
}

float operacao(int op, float num1, float num2) {
    if (op==1) return soma(num1,num2);
    else if (op==2) return sub(num1,num2);
    else if (op==3) return mult(num1,num2);
    else if (op==4) return div(num1,num2);
    else if (op==5) return pot(num1,num2);
}

int main()    {
    float  op, num1, num2;
    printf ("Entrada: ");
    scanf("%f %f %f",&op,&num1,&num2);
    printf ("Saida: %.2f\n", operacao(op,num1,num2));
}