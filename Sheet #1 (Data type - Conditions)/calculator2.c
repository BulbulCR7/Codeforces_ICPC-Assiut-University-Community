#include<stdio.h>
int main()
{
    int x,z;
    char y;
    scanf("%d%c%d", &x, &y, &z);
    if(y=='+'){
        printf("%d", (x+z));
    }
    if(y=='-'){
        printf("%d", x-z);
    }
    if(y=='*'){
        printf("%d", x*z);
    }
    if(y=='/'){
        printf("%d", x/z);
    }
    return 0;
}