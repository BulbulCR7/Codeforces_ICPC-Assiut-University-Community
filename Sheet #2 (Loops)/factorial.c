#include<stdio.h>
int main()
{
    int x, i, j, n;
    unsigned long long int num;
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        scanf("%d", &n);
        num = 1;
        for(j=1;j<=n;j++){
            num = num*j;
        }
        printf("%llu\n", num);
    }

    return 0;
}