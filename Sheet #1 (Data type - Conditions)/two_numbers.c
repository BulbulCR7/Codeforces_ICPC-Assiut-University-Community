#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float z;
    scanf("%d%d", &x,&y);
    z = (float)x/y;
    printf("floor %d / %d = %.0f\n", x,y, floor(z));
    printf("ceil %d / %d = %.0f\n", x,y, ceil(z));
    printf("round %d / %d = %.0f\n", x,y, round(z));
    return 0;
}