#include <stdio.h>

void swap(int* a,int* b){
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}


int main(void){
    int x ;
    int y ;
    //scanf("%d%d",&x,&y);
    x  = 4;
    y  = 2;
    printf("x: %d , y: %d\n",x , y);
    swap(&x,&y);
    printf("x: %d , y: %d\n",x , y);

}