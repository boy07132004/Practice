#include <stdio.h>
double abs_(double x){
    return (x>0)? x : -x ;
}
double sqrt_(double x,double z){
    printf("%1.4f,%1.4f\n",x,z);
    if(abs_(x-z*z)<0.001){
        return z;
    }
    else{
        return sqrt_(x,0.5*(z+x/z));
    }
}

int main(void){
    printf("%1.4f",sqrt_(2,3));
}