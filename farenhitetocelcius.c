#include<stdio.h>
int main()
{
    int c,f;
    /*
    we know temperature in celcius/5=(farenhite-32)/9
    SO,                    celcius=(farenhite-32)*5/9
    */
    printf("TEMPERATURE IN FARENHITE =");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("TEMPERATURE IN CELCIUS = %d",c);
    return 0;
}
