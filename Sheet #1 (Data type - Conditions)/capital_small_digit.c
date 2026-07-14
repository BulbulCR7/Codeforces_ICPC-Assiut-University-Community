#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if(x>='0' && x<='9'){
        printf("IS DIGIT");
    }
    if(x>='a' && x<='z'){
        printf("ALPHA\n is small");
        printf("IS SMALL");
    }
    if(x>='A' && x<='Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    return 0;
}
