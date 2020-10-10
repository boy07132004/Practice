#include <stdio.h>

void func(int *ptr){
    printf("%d,%d,%d\n",*ptr,*(ptr+1),*(ptr+2));
}

int main(void){
    int x[5];
    int*p;
    p = x;
    for (int i=0;i<5;i++) x[i]=2*i+1;
    printf("%d,%d,%d\n\n",x[0],x[1],x[2]);
    func(p);
}