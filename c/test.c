#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x;
    int y;
} point;

point * vec(int length){
    point* a;
    int i;
    a = (point*)malloc(length*sizeof(point));
    for(i=0;i<length;i++){
        a[i].x = i;
        a[i].y = i+1;
    }
    return a;
}

void vec2(int length,point* *ap,point* *bp){
    *ap = (point*)malloc(length*sizeof(point));
    *bp = (point*)malloc(length*sizeof(point));
    int i ;
    for(i=0;i<length;i++){
        (*ap)[i].x = i;
        (*ap)[i].y = i+1;
        (*bp)[i].x = 2*i;
        ((*bp)+i)->y = 2*i+1;
    }
}

int main(void){
    int i;
    int length;
    point* p;
    point* a;
    point* b;
    scanf("%d",&length);
    p = vec(length);
    for(i=0;i<length;i++){
        printf("X: %d Y: %d \n",(p+i)->x,p[i].y);
    }
    vec2(length,&a,&b);
    for(i=0;i<length;i++){
        printf("AX: %d AY: %d \n",(a+i)->x,a[i].y);
        printf("BX: %d BY: %d \n",(b+i)->x,b[i].y);
    }
}