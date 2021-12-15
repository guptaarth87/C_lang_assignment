#include <stdio.h>

int main(){
    int u,t,h,res,temp,num,sum;
    printf("enter the no.:-");
    scanf("%d",&num);
   // num=328;
    u=num%10;
    temp=num/10;
    t=temp%10;
    h=temp/10;
    //printing reverse number
    printf("reversed digit:");
    res=u*100+t*10+h;
    printf("%d ",res);
}