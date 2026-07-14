#include<stdio.h>
#define PI 3.141592653
int main()
{
    float r;
    double area;
    scanf("%f", &r);
    area = PI*r*r;
    printf("%.9lf\n", area);

    return 0;
}