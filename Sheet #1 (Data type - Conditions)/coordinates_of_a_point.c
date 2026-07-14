#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    if(x>0 && x<1001 && y>0 && y<1001){
        printf("Q1");
    }
    if(x>-1000 && x<0 && y>0 && y<1000){
       printf("Q2");
    }
    if(x>-1000 && x<0 && y>-1000 && y<0){
        printf("Q3");
    }
    if(x>0 && x<1001 && y>-1000 && y<0){
        printf("Q4");
    }
    if(x==0 && y==0){
        printf("Origem");
    }
    if(x!=0 && y==0){
        printf("Eixo X");
    }
    if(x==0 && y!=0){
        printf("Eixo Y");
    }
    
    
    return 0;
}