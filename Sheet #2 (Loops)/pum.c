#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d", &x);
    for(i=1;i<=x*4;i++){
        if(i%4!=0){
            printf("%d ", i);
        }
        if(i%4==0){
            printf("PUM\n");
        }
    }
    return 0;
}