#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        x=0;//This initialization of the value of x inside the loop not is very important part of this code.
        for(j=1;j<=i;j++){
            if(i%j==0){
                x++;
            }
        }if(x==2){
            printf("%d ", i);    
        }
    }
    return 0;
}