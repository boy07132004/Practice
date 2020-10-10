#include <stdio.h>

int fibo(int x){
    if(x<3){
        return x-1;
    }
    else{
        return (fibo(x-1)+fibo(x-2));
    }
}


int main(void){
    printf("%d\n",fibo(5));
}