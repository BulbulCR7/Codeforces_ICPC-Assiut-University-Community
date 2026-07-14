#include<stdio.h>
int main()
{
    int i,n,p=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<x){
            x = arr[i];
            p=i;
        }
    }printf("%d %d", x,p+1);
    return 0;
}