#include<stdio.h>
int main()
{
    int x,y,summation,subtraction;
    long long multiplication;
    scanf("%d %d", &x,&y);
    summation = x+y;
    multiplication = (long long)x*y;
    subtraction = x-y;
    printf("%d + %d = %d", x,y,summation);
    printf("\n%d * %d = %lld", x,y,multiplication);
    printf("\n%d - %d = %d", x,y,subtraction);
    return 0;
}