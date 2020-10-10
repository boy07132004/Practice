#include <stdio.h>
#include <string.h>

int main(void){
    int c ;
    c = 'A';
    while (c<='z'){
        printf("%c:%3d  ",c,c);
        c++;
        if (c=='a') printf("\n");
    }
}