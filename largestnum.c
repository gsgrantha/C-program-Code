#include <stdio.h>
int main()
{
    int  a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b){
        printf("a=%d is the largest number",a);
    }
    else if(b>c){
        printf("b=%d is the largest number",b);
    }
     else if(c>a){
        printf("c=%d is the largest number",c);
    }
    return 0;
}

