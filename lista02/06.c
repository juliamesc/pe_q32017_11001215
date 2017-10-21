/* calcula as raizes de uma equação de segundo grau
 */

 #include <stdio.h>
 #include <math.h>

double delta (double a,double b,double c) {
    return pow(b,2)-4*a*c;
 }

double termo1(double a,double b){
    return -b/(2*a);
 }

double termo2(double a, double delt) {
    return sqrt(delt)/(2*a);
 }

double raiz(double a,double b,double c) {
    double x1, x2, x_real, x_imaginario;
    if (delta(a,b,c)>=0) {
        x1=termo1(a,b)+termo2(a,delta(a,b,c));
        x2=termo1(a,b)-termo2(a,delta(a,b,c));
        printf("Saida: %.2f %.2f\n", x1, x2);
    }
    else {
        x_real=termo1(a,b);
        x_imaginario=termo2(a,-delta(a,b,c));
        printf("Saida: %.2f + %.2f i; %.2f - %.2f i\n", x_real, x_imaginario, x_real, x_imaginario);
    }
}

int main() {
    double a,b,c;
    printf ("Entrada: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    raiz(a,b,c);
}