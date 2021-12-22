#include <stdio.h>

int main(){
    int marks[10],i,count;
    printf("Enter the no of array:\n");
    for(i=0;i<10;i++){
        printf("enter:");
        scanf("%d",&marks[i]);
    }
    count=0;
   
    for (i=0;i<10;i++){
       if(marks[i]<35){
           count++;
       }
      
    }
    printf("%d",count);
   
    return 0;
}