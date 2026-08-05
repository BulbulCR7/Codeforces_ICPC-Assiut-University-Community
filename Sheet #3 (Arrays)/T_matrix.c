#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d", &n);
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    int sum1=0, sum2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum1+=mat[i][j];
            }
        }
    }
    for(i=0,j=n-1;i<n;i++,j--){
        sum2+=mat[i][j];
    }
    int sum = sum1 - sum2;
    if(sum<0){
        printf("%d", sum*-1);
    }
    else{
        printf("%d", sum);
    }
    return 0;
}