#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    int num;
    scanf("%d",&num);
    /*
    i = 1;
    while (i<num){
        i = i * 2;
    }
    i = i / 2;
    printf("%d\n",i);
    while (i!=0){
        printf("%d",num/i);
        num = num % i ;
        i = i / 2;
    }
    printf("\n");
    */
   char ans[30];
   int j = 0 ;
   while (num){
       ans[j] = num % 2 ;
       num = num / 2 ;
       j++;
   }
   printf("%d\n",j);
   while (j>0)
   {
       printf("%d",ans[--j]);
   }
   printf("\n");
   
}