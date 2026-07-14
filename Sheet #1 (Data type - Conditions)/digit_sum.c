#include<stdio.h>
int main()
{
    long long x,y,temp1, temp2, sum;
    scanf("%lld %lld", &x, &y);
    temp1 = x%10;
    temp2 = y%10;
    sum = temp1 + temp2;
    printf("%lld", sum);

    return 0;
}