/* Verifica se um numero � par ou �mpar
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