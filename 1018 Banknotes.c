#include<stdio.h>
int main ()
{
    int A,B;
    scanf("%d",&A);
    printf("%d\n",A);
    printf("%d nota(s) de R$ 100,00\n", A/100);
    B = (A%100);
    printf("%d nota(s) de R$ 50,00\n", B/50);
    B = (B%50);
    printf("%d nota(s) de R$ 20,00\n", B/20);
    B = (B%20);
    printf("%d nota(s) de R$ 10,00\n", B/10);
    B = (B%10);

    printf("%d nota(s) de R$ 5,00\n", B/5);
    B = (B%5);

    printf("%d nota(s) de R$ 2,00\n", B/2);
    B = (B%2);

    printf("%d nota(s) de R$ 1,00\n", B/1);
    return 0;
}
