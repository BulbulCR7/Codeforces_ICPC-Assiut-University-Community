#include<stdio.h>
int main()
{
    int i,j,k,l,n,num,test,min;
    scanf("%d", &n);
    for(k=1;k<=n;k++){
        scanf("%d", &num);
        int arr[num+1];
        for(l=1;l<=num;l++){
            scanf("%d", &arr[l]);
        }
        min = arr[1] + arr[2] + 1;
        for(i=1;i<=num-1;i++){
            for(j=i+1;j<=num;j++){
                test = arr[i] + arr[j] + j - i;
                if(test<min){
                    min = test;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}