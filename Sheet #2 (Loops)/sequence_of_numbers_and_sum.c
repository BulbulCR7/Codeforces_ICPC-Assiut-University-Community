#include<stdio.h>
int main()
{
    int i,m,n,sum;
    scanf("%d %d", &m,&n);
    while(n>0 && m>0){
        sum = 0;//Very important part where it took the input before executing the while loop and again took input after finishing 19'th line.
        if(m>n){
            for(i=n;i<=m;i++){
                printf("%d ", i);
                sum+= i;
            }
        }else{
            for(i=m;i<=n;i++){
                printf("%d ", i);
                sum+= i;
            }
        }
        printf("sum =%d\n",sum);
        scanf("%d %d", &m,&n);
    }
    
    return 0;
}