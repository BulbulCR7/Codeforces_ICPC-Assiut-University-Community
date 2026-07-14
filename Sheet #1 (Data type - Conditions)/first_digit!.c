#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d", &x);
    p=x/1000;
    if(p%2==0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    return 0;
}