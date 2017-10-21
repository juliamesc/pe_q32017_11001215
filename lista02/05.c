/* Faz combinacao de n elementos tomados k a k
 */

#include <stdio.h>
#include <math.h>

 int fatorial(int a) {
    int fat=1;
    if (!a) {
        return 1;
    }
    while (a){
        fat*=a;
        a--;
    }
    return fat;
}

int combinacao(int n, int k) {
    return fatorial(n)/(fatorial(n-k)*fatorial(k));
}

int main() {
    int  n,k;
    printf ("Entrada: ");
    scanf("%d %d",&n,&k);
    printf ("Saida: %d\n", combinacao(n,k));
}