#include<stdio.h>

int main(){
    int count1 ,count2 ;
    for (count1 =1;count1<=20;count1++){
        for(count2=1;count2<=10;count2++){
            printf("%d*%d=%d\n", count1,count2,count1*count2);
        }
    }
    return 0;
}