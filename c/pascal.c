#include <stdio.h>
#include <string.h>

int main(void){
    int a[10][10]={0};
    int i,j;
    a[1][1] = 1;
    i = 2;
    while (i<=9){
        j = 1 ;
        while (j<=9){
            a[i][j] = a[i-1][j-1]+a[i-1][j];
            j++;
        }
        i++;
    }
    i = 0 ;
    while (i<=9){
        j = 0 ;
        while (j<=9){
            printf("%3d",a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}