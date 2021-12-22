#include <stdio.h>

int main(){
    int marks[10],i,min,max;
    printf("Enter the no of array:\n");
    for(i=0;i<10;i++){
        printf("enter:");
        scanf("%d",&marks[i]);
    }
    max=0;
    min=marks[0];
    for (i=0;i<10;i++){
        if(marks[i]>max){
            max=marks[i];
        }else if(marks[i]<min){
            min=marks[i];
        }else{
            continue;
        }
    }
    printf("max");
    printf("%d\n",max);
    printf("min");
    printf("%d",min);
    return 0;
}