/* Verifica se um numero é par ou ímpar
*/

#include <stdio.h>

int verifica(int  a) {
    return a%2;
    }


int main()    {
    int  num;
    printf ("Entrada: ");
    scanf("%d", &num);
    printf ("Saida: %d\n", verifica(num));
    }