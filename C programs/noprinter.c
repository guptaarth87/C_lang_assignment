#include<stdio.h>

int main(){
    int i,t,j;
    printf("enter line :");
    scanf("%d",&i);
    for(i=1;i<t;i++){
        for(j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}