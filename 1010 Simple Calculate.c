#include<stdio.h>
int main ()
{
    int A, B;
    double C;
    scanf("%d %d %lf", &A, &B, &C);
    int D, E;
    double F;
    scanf("%d %d %lf", &C, &E, &F);
    double VAP;
    VAP = B * C + E * F;
    printf("VALOR A PAGAR: R$ %.2lf\n", VAP);
    return 0;

}
