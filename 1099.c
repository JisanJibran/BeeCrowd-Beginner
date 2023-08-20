#include<stdio.h>
int main(){
    int N,X,Y,i,j,sum = 0;
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        scanf("%d%d", &X, &Y);
        if(X > Y){
            for(j = Y+1,sum = 0; j < X; j++){
                if(j % 2 != 0){
                    sum += j;
                }
            }
        }else if(X <= Y){
            for(j = X+1,sum = 0; j < Y; j++){
                if(j % 2 != 0){
                    sum += j;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
