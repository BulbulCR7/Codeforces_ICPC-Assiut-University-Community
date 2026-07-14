#include<stdio.h>
int main()
{
    int a,b,c,d;
    long long dif, dif1, difference;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    dif = (long long)a*b-(long long)c*d;
    printf("Difference = %lld", dif);

    return 0;
}