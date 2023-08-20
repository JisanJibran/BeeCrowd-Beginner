#include <stdio.h>
int main() {

    int H,Z,L;
    scanf("%d%d%d", &H,&Z,&L);
    if(H > Z && H < L){
        printf("Huguinho\n");
    }else if(H < Z && H > L){
        printf("Huguinho\n");
    }else if(Z > H && Z < L){
        printf("Zezinho\n");
    }else if(Z < H && Z > L){
        printf("Zezinho\n");
    }else{
        printf("Luisinho\n");
    }
}
