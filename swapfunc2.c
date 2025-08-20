#include <stdio.h>
int main()
{
    char a,b,s;
    printf("A= ");
    scanf(" %c",&a);
    printf("B= ");
    scanf("%c",&b);
    s=a;
    a=b;
    b=s;
    printf("after swapping :a=%d, b=%d",a,b);
}


