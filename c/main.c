#include <stdio.h>
/*
input : 10
output:((((1+2)*3+4)*5+6)*7+8)*9+10=
*/

int func(int x);
int main(void){
    int num,sum;
    if (num==0) printf("0 = 0");
    sum = 1;
    scanf("%d",&num);
    printf(" = %d\n",func(num));
}

int func(int x){
    int ans;
    if (x==1){
        printf("1");
        return 1;
    }
    if (x%2==1){
        printf("(");
    }
    ans = func(x-1);
    if (x%2==0) {
        printf("+%d",x);
        ans+=x;
    }
    else {
        printf(")*%d",x);
        ans*=x;
    }
    return ans;
}