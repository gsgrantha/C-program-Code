#include <stdio.h>
int main()
{
    char input[100], output[100];
    char *inputPtr, *outputPtr;
    printf("Enter a string for copy: ");

    gets(input);
    inputPtr = input;
    outputPtr = output;

    while (*inputPtr != '\0') {
        *outputPtr = *inputPtr;
        inputPtr++;
        outputPtr++;
    }
    *outputPtr = '\0';
    printf("Copied string: %s\n", output);

    return 0;
}
