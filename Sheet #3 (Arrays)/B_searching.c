#include<stdio.h>
int main()
{
    int i,n,x,check = 0;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(x==arr[i]){
            check = 1;
            break;
        }
    }
    if(check){
        printf("%d", i);
    }else{
        printf("-1");
    }
    return 0;
}