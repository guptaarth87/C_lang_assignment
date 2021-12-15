#include <stdio.h>

int main(){
    int num1,num2,sum,diff,mul,div,mod;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    diff=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("\nThe sum of the numbers:%d",sum);
    printf("\nThe differnce of the numbers:%d",diff);
    printf("\nThe product of the numbers:%d",mul);
    printf("\nThe Quotient of the numbers:%d",div);
    printf("\nThe modulas of two numbers:%d",mod);
}