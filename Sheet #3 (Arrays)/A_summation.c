#include<stdio.h>
int main()
{
    int i,n;
    long long sum=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }if(sum<0){
        printf("%lld", sum*-1);
    }else{
        printf("%lld", sum);
    }
    return 0;
}