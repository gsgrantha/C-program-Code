#include<stdio.h>
#include<string.h>
int main()
{
    //strcpy
    char source[]="Bangladesh Digital University";
    char target[100];
    strcpy(target,source);
    printf("Source string = %s\n",source);
    printf("Target string = %s\n",target);

    return 0;
}
