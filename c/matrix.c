#include <stdio.h>
#include <string.h>

int main(void){
    printf("height? : ");
    int height;
    scanf("%d",&height);
    printf("width? : ");
    int width;
    scanf("%d",&width);
    if(height*width==0){
        printf("Height or width can't be zero.\n");
        return 0;
    }
    int i,j;
    i = 0;
    while(i<height){
        j = 0;
        while(j<width){
            printf("a[%1d][%1d]  ",i,j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}