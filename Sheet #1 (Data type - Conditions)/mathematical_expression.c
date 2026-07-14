#include<stdio.h>
int main()
{
    int a,b,c;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    if(a+b==c && x=='+'){
        printf("Yes");
    }else if(a+b!=c && x=='+'){
        c=a+b;
        printf("%d", c);
    }
    if(a-b==c && x=='-'){
        printf("Yes");
    }else if(a-b!=c && x=='-'){
        c=a-b;
        printf("%d", c);
    }
    if(a*b==c && x=='*'){
        printf("Yes");
    }else if(a*b!=c && x=='*'){
        c=a*b;
        printf("%d", c);
    }
    return 0;

}