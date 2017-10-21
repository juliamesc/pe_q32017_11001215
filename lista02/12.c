/* Combinação de dois números através do triângulo de Pascal
 */

 #include <stdio.h>
 #include <math.h>

int Pascal[50][50];

int combinacao(int n, int k){

    if (n==k) return 1;
    if (k==0) return 1;
    if (Pascal[n][k]==0) Pascal[n][k]=combinacao(n-1,k)+combinacao(n-1,k-1);
    return Pascal[n][k];

}
 int main()
{
    int n,k;
    scanf("%d %d",&n, &k);
    printf("%d\n", combinacao(n,k));
 }