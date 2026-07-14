#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a lower-case letter: ");
    scanf("%c",&alpha);
    if(alpha>= 'a' && alpha<= 'z'){
        alpha = alpha-32;
    }
    printf("The upper-case equivalent is: %c", alpha);
    return 0;
}