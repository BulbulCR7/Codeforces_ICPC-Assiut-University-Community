#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n-1,k=1;i>=1,k<=2*n-1;i--,k=k+2){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}