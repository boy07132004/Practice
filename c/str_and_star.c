#include <stdio.h>
#include <string.h>
#define star "**************************************************"
int main(void){
    printf("Type a string:  ");
    char str[26];
    scanf("%25s",str);
    printf("%.*s\n",strlen(str)+2,star);
    printf("*%s*\n",str);
    printf("%.*s\n",strlen(str)+2,star);
    return 0;
}