#include<stdio.h>
int main()
{
    int i,n;
    for(i=1000;i<=9999;i++){
        scanf("%d",&n);
        if(n==1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}