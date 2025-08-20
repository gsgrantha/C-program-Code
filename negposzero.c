#include <stdio.h>
int main()
{
    int  a;
    printf("a=");
    scanf("%d",&a);

    if(a>0){
        printf("a=%d is the positive number",a);
    }
    else if(a<0){
        printf("a=%d is the negative number",a);
    }
     else if(a==0){
        printf("a=%d is zero",a);
    }
    return 0;
}


