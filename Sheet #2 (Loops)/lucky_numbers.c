//Very Important!!!
#include<stdio.h>
int main()
{
    int i,x,y,m,n,missing = 0;
    scanf("%d %d", &m, &n);
    for(i=m;i<=n;i++){
        x=i;
        while(x!=0){
            y=x%10;
            if(y!=4 && y!=7)
                break;
            x/=10;
            
        }
        if(x==0){
            printf("%d ", i);
            missing = 1;
        }
    }
    if(missing==0){
        printf("-1");
    }
    return 0;
}