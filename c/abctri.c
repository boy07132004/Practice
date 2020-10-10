#include <stdio.h>
#include <string.h>

int main(void){
    int i;
    char word[30];
    scanf("%29s",word);
    i=1;
    while (i<=strlen(word)){
        printf("%*.*s\n",strlen(word),i,word);
        i++;
    }
    return 0;
}