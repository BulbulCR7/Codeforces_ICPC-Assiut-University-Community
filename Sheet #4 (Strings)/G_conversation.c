#include<stdio.h>
#include<ctype.h>
int main()
{
    char x[100000];
    scanf("%[^\n]", x);
    for(int i=0;x[i]!='\0';i++){
        if(x[i]>='A' && x[i]<='Z'){
            printf("%c", tolower(x[i]));
        }else if(x[i]==','){
            printf(" ");
        }else{
            printf("%c", toupper(x[i]));
        }
    }
    return 0;
}