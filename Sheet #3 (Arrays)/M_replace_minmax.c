#include<stdio.h>
int main()
{
    int i,n,temp;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min = 0, max = 0;
    for(i=1;i<n;i++){
        if(arr[i]<arr[min]){
            min = i;
        }
        if(arr[i]>arr[max]){
            max = i;
        }
    }
        temp = arr[max];
        arr[max] = arr[min];
        arr[min] = temp;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}