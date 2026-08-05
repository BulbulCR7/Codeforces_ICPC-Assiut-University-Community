#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d", &m,&n);
    char arr[m+n+2];
    scanf("%s", arr);
    if(arr[m]!='-'){
        printf("No");
        return 0;
    }
    for(i=0;arr[i]!='\0';i++){
        if(i==m){
            continue;
        }if(arr[i]>='0' && arr[i]<='9'){
            continue;
        }else{
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}