#include <stdio.h>
int main() {

    int H,Z,L;
    scanf("%d%d%d", &H,&Z,&L);
    if(H > Z && H < L){
        printf("huguinho\n");
    }else if(H < Z && H > L){
        printf("huguinho\n");
    }else if(Z > H && Z < L){
        printf("zezinho\n");
    }else if(Z < H && Z > L){
        printf("zezinho\n");
    }else{
        printf("luisinho\n");
    }
}
