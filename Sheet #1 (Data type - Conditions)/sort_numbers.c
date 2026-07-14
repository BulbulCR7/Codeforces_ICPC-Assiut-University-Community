#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);
    if(x>=y && x>=z && y>=z){
        printf("%d\n", z);
        printf("%d\n", y);
        printf("%d\n\n", x);
    }else if(x>=y && x>=z && z>=y){
        printf("%d\n", y);
        printf("%d\n", z);
        printf("%d\n\n", x);
    }else if(y>=x && y>=z && x>=z){
        printf("%d\n", z);
        printf("%d\n", x);
        printf("%d\n\n", y);
    }else if(y>=x && y>=z && z>=x){
        printf("%d\n", x);
        printf("%d\n", z);
        printf("%d\n\n", y);
    }else if(z>=y && z>=x && x>=y){
        printf("%d\n", y);
        printf("%d\n", x);
        printf("%d\n\n", z);
    }else if(z>=y && z>=x && y>=x){
        printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n\n", z);
    }
        printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n", z);

    return 0;
}