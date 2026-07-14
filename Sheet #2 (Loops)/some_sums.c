#include<stdio.h>
int main()
{
    int i,x,y,z,m,sum1,sum =0;
    scanf("%d %d %d", &x,&y,&z);
    for(i=1;i<=x;i++){
        m=i;
        sum1=0;
        while(m!=0){
            sum1+=m%10;
            m/=10;
        }
        if(sum1>=y && sum1<=z){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}