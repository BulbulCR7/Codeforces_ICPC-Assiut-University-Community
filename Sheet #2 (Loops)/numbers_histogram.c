#include<stdio.h>
int main()
{
    int i,j,n,p;
    char m;
    scanf("%c", &m);
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &p);
        for(j=1;j<=p;j++){
            printf("%c", m);
        }
        printf("\n");
    }
    
    return 0;
}