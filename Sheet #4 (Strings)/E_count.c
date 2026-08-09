#include<stdio.h>
int main()
{
    char str[1000000];
    scanf("%s", str);
    int a,sum = 0;
    for(int i=0;str[i]!='\0';i++){
        a = str[i] - '0';
        sum+=a;
    }
    printf("%d", sum);
    return 0;
}