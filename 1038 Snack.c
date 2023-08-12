#include<stdio.h>
int main ()
{
    int X, Y;
    double P_1, P_2, P_3, P_4, P_5;
    scanf("%d%d",&X,&Y);
    if (X==1)
    {
        P_1 = Y*4.00;
        printf("Total: R$ %.2lf\n",P_1);
    }
    if (X==2)
    {
        P_2 = Y*4.50;
        printf("Total: R$ %.2lf\n",P_2);
    }
    if (X==3)
    {
        P_3 = Y*5.00;
        printf("Total: R$ %.2lf\n",P_3);
    }
    if (X==4)
    {
        P_4 = Y*2.00;
        printf("Total: R$ %.2lf\n",P_4);
    }
    if (X==5)
    {
        P_5 = Y*1.50;
        printf("Total: R$ %.2lf\n",P_5);
    }

    return 0;
}
