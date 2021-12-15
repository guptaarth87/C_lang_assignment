#include<stdio.h>

int main(){
    int i,j,k,num;
    num=7;
    for(i=1;i<num+1;i++){
        if(i==(num+1)/2){
            for(k=1;k<(num+1);k++){
                printf("*\t");
            }
            printf("\n");
        }else{
            for(j=0;j<3;j++){
            printf("\t");
        }
        printf("* \n");
        }
    }
    return 0;
}