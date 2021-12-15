#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the no. to swap\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    temp=a+b;
    a=temp-a;
    b=temp-b;
    printf("after swapping:-\n");
    printf("a:%d\n",a);
    printf("b:%d",b);
    return 0;
}