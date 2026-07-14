#include<stdio.h>
int main()
{
    long long a,b,c,d,x;

    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    x = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    printf("%02lld", x);

    return 0;
}