#include<stdio.h>

int main(){
    int num;
    printf("Enter the marks: ");
    scanf("%d",&num);
    if(num>100 || num<0){
        printf("invalid input from user!");
    }else{
        if(num>75 || num ==75){
            printf("A grade");
        }
        else if(num<75 && num>60){
            printf("B grade");
        }
        else if(num<61 && num>50){
            printf("C grade");
        }
        else if(num<51 && num>40){
            printf("D grade");
        }else{
            printf("Fail");
        }
    }
    return 0;
}