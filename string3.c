#include<stdio.h>
#include<string.h>
int main()
{
    //strcat
    char str1[]="My name is Grantha Saha";
    char str2[]=" And i am a student of dept. of DSE";
    strcat(str1,str2);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
}
