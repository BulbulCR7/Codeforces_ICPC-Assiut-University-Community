#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d %d %d %d", &w,&x,&y,&z);
    if(w<=y && x<=z && x>=y){
        printf("%d %d", y,x);
    }else if(w>=y && x<=z){
        printf("%d %d", w,x);
    }else if(w<=y && x>=z){
        printf("%d %d", y,z);
    }else if(w>=y && x>=z && w<=z){
        printf("%d %d", w,z);
    }else{
        printf("%d", -1);
    }
    return 0;
}