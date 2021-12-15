#include<stdio.h>

int main(){
    int i,j;
    for(i=2;i<9;i=i+2){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}