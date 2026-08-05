#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    long long int fib[n+1];
    fib[0]= 0, fib[1]= 1;
    if(n==1){
        printf("%lld", fib[0]);
        return 0;
    }
    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("%lld", fib[n-1]);
    return 0;
}