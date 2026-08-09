#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int num;
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        scanf("%s", a);
        int x = strlen(a);
        if(x<=10){
            printf("%s", a);
        }else{
            printf("%c%d%c", a[0],x-2,a[x-1]);
        }
        printf("\n");
    }
    return 0;
}