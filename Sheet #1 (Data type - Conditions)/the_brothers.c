#include<stdio.h>
int main()
{
    char p11[100],p12[100],p21[100],p22[100];
    int i, same = 1;
    scanf("%s%s%s%s", p11,p12,p21,p22);
    for(i=0; p12[i] != '\0'|| p22[i] != '\0';i++){
        if(p12[i] != p22[i]){
            same = 0;
            break;
        }
    }
    if(same){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }

    return 0;
}