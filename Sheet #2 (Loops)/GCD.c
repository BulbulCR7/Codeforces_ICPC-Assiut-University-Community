#include<stdio.h>
int main()
{
    int i, j, x, m, n;
    scanf("%d %d", &m,&n);
    for(i=1,j=1;i<=m,j<=n;i++,j++){
        if(m%i==0 && n%j==0){
            x=i;
        }
    }
    printf("%d\n", x);
    return 0;
}