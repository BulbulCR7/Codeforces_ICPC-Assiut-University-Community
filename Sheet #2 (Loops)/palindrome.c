#include<stdio.h>
int main()
{
    int i,j=0,n,num;
    scanf("%d", &n);
    num = n;
    while(n!=0){
        i=n%10;
        j=j*10+i;
        n=n/10;
    }printf("%d\n", j);
    if(num==j){
        printf("YES");
    }else{
        printf("NO");
    }     
    return 0;
}