#include<stdio.h>
int main()
{
    int x,z;
    char y;
    scanf("%d %c %d", &x,&y,&z);
    if((y=='>'&& x>z)||(y=='<' && x<z)||(y=='=' && x==z)){
        printf("Right");
    }else{
        printf("Wrong");
    }
    return 0;
}