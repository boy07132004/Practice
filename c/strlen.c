#include <stdio.h>

int strlen_(char *s){
    int i = 0 ;
    //while (*(s+i)!='\0') i++;
    while( *s != '\0') {i++;s++;};
    return i; 
}

int main(void){
    char str[50];
    scanf("%s",str);
    printf("%d\n",strlen_(str));
    u_int16_t i = 0;
}