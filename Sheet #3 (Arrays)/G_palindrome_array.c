#include<stdio.h>
int main()
{
    int i,n,check=0;
    scanf("%d", &n);
    long arr[n];
    for(i=0;i<n;i++){
        scanf("%ld", &arr[i]);
    }
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            check = 1;
            break;
        }
    }
    if(check){
        printf("NO");
    }else{
        printf("YES");
    }

    return 0;
}