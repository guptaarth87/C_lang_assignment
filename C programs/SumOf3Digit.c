#include <stdio.h>

int main(){
    int u,t,h,res,temp,num,sum;
    printf("enter the no.:-\n");
    scanf("%d",&num);
   
    u=num%10;
    temp=num/10;
    t=temp%10;
    h=temp/10;
   
    //printing their sum
    printf("\nsum of digits : ");
    sum=u+t+h;
    printf("%d",sum);
}