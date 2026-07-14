#include<stdio.h>
int main()
{
    int v;
    long long w;
    char x;
    float y;
    double z;
    scanf("%d %lld", &v, &w);
    getchar();
    scanf("%c", &x);
    scanf("%f %lf", &y,&z);

    printf("%d\n%lld\n%c\n%.2f\n%.1f", v,w,x,y,z);
    return 0;
}
