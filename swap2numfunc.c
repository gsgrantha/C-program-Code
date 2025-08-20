#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n1 = 10, n2 = 20;
    int *p1 = &n1, *p2 = &n2;
    printf("Before swap: n1 = %d, n2 = %d\n", *p1, *p2);
    swap(p1, p2);
    printf("After swap: n1 = %d, n2 = %d\n", *p1, *p2);

    return 0;
}

