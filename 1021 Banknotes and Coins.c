#include<stdio.h>
int main ()
{
    float  A,B,C;

    int X,Y,Z;

    scanf("%f",&A);
    X = A;
    B = A - X;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", X/100);
    X = (X%100);
    printf("%d nota(s) de R$ 50.00\n", X/50);
    X = (X%50);
    printf("%d nota(s) de R$ 20.00\n", X/20);
    X = (X%20);
    printf("%d nota(s) de R$ 10.00\n", X/10);
    X = (X%10);
    printf("%d nota(s) de R$ 5.00\n", X/5);
    X = (X%5);
    printf("%d nota(s) de R$ 2.00\n", X/2);
    X = (X%2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", X);
    Z=round(B*100);
    printf("%d moeda(s) de R$ 0.50\n", Z/50);
    Z = (Z%50);
    printf("%d moeda(s) de R$ 0.25\n", Z/25);
    Z = (Z%25);
    printf("%d moeda(s) de R$ 0.10\n", Z/10);
    Z = (Z%10);
    printf("%d moeda(s) de R$ 0.05\n", Z/5);
    Z = (Z%5);
    printf("%d moeda(s) de R$ 0.01\n", Z/1);
    return 0;
}
