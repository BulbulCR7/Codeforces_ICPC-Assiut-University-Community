#include<stdio.h>
int main()
{

    float x,y;
    scanf("%f", &x);
    if(x==(int)x){
        printf("int %d", (int)x);
    }else if(y=x-(int)x){
        printf("float %d %f", (int)x, y);
    }
    return 0;
}