#include<stdio.h>
#include<string.h>
int main()
{
    char str[1002];
    scanf("%s", str);
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]!=str[strlen(str)-i-1]){
                printf("NO");
                return 0;
            }
        }else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}