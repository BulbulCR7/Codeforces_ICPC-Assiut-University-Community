#include<stdio.h>
int main()
{
    int i=0,m,n,num;
    printf("Enter a number up to two digits: ");
    scanf("%d", &n);
    num=n;
    if(n>=10 && n<=99){
        while(n!=0){
            m=n%10;
            i=i*10+m;
            n/=10;
        }printf("Your desired output is: %d\n", i);
    }else{
        printf("You have entered a number which is more than two digits. \n");
    }
    
    return 0;
}