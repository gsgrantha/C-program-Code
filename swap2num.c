#include <stdio.h>
int main()
{
    int n1 = 10, n2 = 20;
    int *p1 = &n1, *p2 = &n2;
    printf("Before swap: n1 = %d, n2 = %d\n", *p1, *p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swap: n1 = %d, n2 = %d\n", *p1, *p2);

    return 0;
}
