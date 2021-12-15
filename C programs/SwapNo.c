#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no. to swap\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:-\n");
    printf("a:%d\n",a);
    printf("b:%d",b);
    return 0;
}