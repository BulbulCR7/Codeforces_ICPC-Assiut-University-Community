#include<stdio.h>
int main()
{
    int i,j,n,x,y,sum;
    scanf("%d", &n);
    for(j=1;j<=n;j++){
        scanf("%d %d",&x,&y);
        sum=0;
        if(x>y){
            for(i=y+1;i<x;i++){
                if(i%2!=0)
                sum+=i;
            }
        }else{
            for(i=x+1;i<y;i++){
                if(i%2!=0)
                sum+=i;
            }
        }
        printf("%d \n", sum);
    }
    return 0;
}