#include<stdio.h>
int main ()
{
    int D, M, Y;
    scanf("%d", &D);
    Y = D / 365;
    D = D - (Y * 365);
    M = D / 30;
    D = D - (M * 30);
  printf("%d ano(s)\n", Y);
  printf("%d mes(es)\n", M);
  printf("%d dia(s)\n", D);

    return 0;

}
