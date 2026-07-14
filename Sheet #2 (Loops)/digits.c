#include<stdio.h>
int main()
{
    int i,x,n;
    long int p;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%ld", &p);
        if(p==0){
            printf("0");
        }else{
            while(p>0){
                x=p%10;
                printf("%d ", x);
                p/=10;
            }
        }
        printf("\n");
    }
    return 0;
}