#include<stdio.h>
int main()
{
    int i, n, num, max;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &num);
        if(num>max){
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}