#include<stdio.h>
#include<string.h>
int main()
{
    //strcmp

    char str1[]="Grantha Saha";
    char str2[]="Grantha";
    int d = strcmp(str1,str2);
    if(d==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");
}

