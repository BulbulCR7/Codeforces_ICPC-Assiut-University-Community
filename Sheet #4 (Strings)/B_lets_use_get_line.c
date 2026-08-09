#include<stdio.h>
int main()
{
    char str[1000000];
    scanf("%[^\n]", str);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\\'){
            break;    
        }
        printf("%c", str[i]);
    }
    return 0;
}