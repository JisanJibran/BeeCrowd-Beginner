# include <stdio.h>
    int main(){
         int NUMBER,Worked_hours;
         float amount,SALARY;
         scanf("%d %d %f", &NUMBER, &Worked_hours, &amount);
         SALARY = Worked_hours * amount;
         printf("NUMBER = %d\n",NUMBER);
         printf("SALARY = U$ %.2f\n", SALARY);
         return 0;
    }
