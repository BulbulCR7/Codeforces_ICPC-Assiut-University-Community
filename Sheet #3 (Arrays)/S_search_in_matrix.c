#include<stdio.h>
int main()
{
    int i,j,n,m,x;
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &x);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matrix[i][j]==x){
                printf("will not take number");
                return 0;
            }
        }
    }
    printf("will take number");
    return 0;
}