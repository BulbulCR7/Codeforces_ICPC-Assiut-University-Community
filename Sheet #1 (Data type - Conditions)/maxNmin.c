#include<stdio.h>
 
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
 
    int min = x;
    int max = x;
 
    if(y < min)
        min = y;
    if(z < min)
        min = z;
    if(y > max)
        max = y;
    if(z > max)
        max = z;
    printf("%d %d", min, max);
 
    return 0;
}