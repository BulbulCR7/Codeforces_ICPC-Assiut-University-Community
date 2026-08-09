#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[1000];
    scanf("%s%s", s,t);
    int a = strlen(s), b = strlen(t);
    printf("%d %d\n", a,b);
    printf("%s %s", s,t);
    return 0;
}