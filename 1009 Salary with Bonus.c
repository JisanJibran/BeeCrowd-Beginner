#include<stdio.h>
int main ()
{
    char Name;
    double Salary,Recieve,TOTAL;
    scanf("%s",&Name);
    scanf("%lf %lf",&Salary,&Recieve);
    TOTAL = Salary+Recieve*.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

}
