#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[11];
    scanf("%s%s", a,b);
    char temp[11];
    strcpy(temp,a);
    int x = strlen(a), y = strlen(b);
    printf("%d %d\n", x,y);
    strcat(a,b);
    printf("%s\n", a);
    printf("%c", b[0]);
    for(int i=0;temp[i]!='\0';i++){
        if(i!=0){
            printf("%c", temp[i]);
        }
    }
    printf(" ");
    printf("%c", a[0]);
    for(int i=0;b[i]!='\0';i++){
        if(i!=0){
            printf("%c", b[i]);
        }
    }
    return 0;
}