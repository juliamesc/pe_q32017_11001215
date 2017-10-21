/* faz cálculo da potencia
 */

 #include <stdio.h>
 #include <math.h>

int potencia(int num1, int num2)
{
    if (!num2){
        return 1;
    }
    return num1*potencia(num1,num2-1);
}

int main() {
    int num1,num2;
    printf ("Entrada: ");
    scanf("%d %d",&num1,&num2);
    printf ("Saida: %d\n", potencia(num1,num2));
}