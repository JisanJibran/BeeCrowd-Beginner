#include<stdio.h>
int main ()
{
float X, Y, Consumption;
scanf("%f%f", &X, &Y);
Consumption = X / Y;
printf("%.3f km/l\n", Consumption);
return 0;
}
