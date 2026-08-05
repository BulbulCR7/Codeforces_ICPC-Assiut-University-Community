#include<stdio.h>
int main()
{
    int i,n,count;
    int temp = 10000;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("0");
            return 0;
        }else{ 
            count = 0;
            while(arr[i]%2==0){
                arr[i]/=2;
                count++;
            }
            if(count<temp){
                temp = count;
            }
        }
    }
    printf("%d", temp);
    return 0;
}