#include<stdio.h>

int main(){
    long long int j;
    j=1;
    for(int i=2;i<100;i++){
        
        printf("%lld  ",j);
        j=(j*3)-1;
    }

    return 0;
}