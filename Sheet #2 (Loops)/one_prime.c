#include<stdio.h>
int main()
{
    int i,x, count = 0;
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        count++;
    }
    if(count==2)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}