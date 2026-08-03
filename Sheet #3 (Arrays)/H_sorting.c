#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                x = arr[j];             //most 
                arr[j] = arr[j+1];      //imortant
                arr[j+1] = x;           //part
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}