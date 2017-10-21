/* converte: 1 decimal, 2 binário
 */

int decimal_binario(int num)
{
    if (!num) return 0;
    return num%2+10*decimal_binario(num/2);
}

int binario_decimal(int num)
{
    if (!num) return 0;
    return (num%2)+binario_decimal(num/10)*2;
}

int conversao (int num, int conv)
{
    switch (conv) {

        case 1:
            return decimal_binario(num);
        break;

        case 2:
            return binario_decimal(num);
        break;

    }
}

int main()
{
    int conv, num;
    printf ("Entrada: ");
    scanf("%d %d",&num,&conv);
    printf ("Saida: %d\n", conversao(num,conv));
}