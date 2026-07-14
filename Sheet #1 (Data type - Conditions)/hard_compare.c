#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    if(b*log((double)a)>d*log((double)c)){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}