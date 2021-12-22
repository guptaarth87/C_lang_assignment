#include<stdio.h>

int main(){
    int i,j,count,row;
    printf("enter the value of Rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++){
        for(j=0;j<i;j++){
            printf("* \t");
        }
        printf("\n");
    }
    return 0;
}