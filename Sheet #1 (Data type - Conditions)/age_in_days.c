#include<stdio.h>
int main()
{
    int x,p,q,r,s;
    scanf("%d", &x);
    p=x/365;
    q=x%365;
    r=q/30;
    s=q%30;

    printf("%d years\n", p);
    printf("%d months\n", r);
    printf("%d days\n", s );
    return 0;
}