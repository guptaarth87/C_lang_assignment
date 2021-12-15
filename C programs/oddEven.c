#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    if(n==0){
        printf("Invalid user input");
    }
    else if(n%2==0){
        printf("Given input is even!");
    }else{
        printf("Given input is odd!");
    }
    return 0;
}