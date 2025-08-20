#include <stdio.h>
int main()
{
    /*
    we know temperature in celcius/5=(farenhite-32)/9
    SO, farenhite=(9*celcius/5)+32
    */
    int f,c;
    printf("TEMPERATURE IN CELCIUS IS =");
    scanf("%d",&c);
    f=(9*c/5)+32;
    printf("TEMPERATURE IN FARENHITE IS = %d",f);
    return 0;
}
