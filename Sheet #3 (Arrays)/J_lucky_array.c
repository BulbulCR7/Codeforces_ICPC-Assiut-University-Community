#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==min){
            count++;
        }
    }
    if(count%2!=0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
    return 0;
}