#include <stdio.h>

double add (float x,float y){
    return x+y;
}
int main(void){
    float x;
    float y;
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Hi, %u .\nHello, world\n",sizeof(x));
    return 0;
}