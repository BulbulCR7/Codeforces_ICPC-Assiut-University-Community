#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d", &n);
    char a[n+1];       //Important.
    scanf("%s",a);     //Important part
    for(i=0;i<n;i++){
        sum+=a[i]-'0';   //Very importan part..
    }
    printf("%d", sum);
    return 0;
}