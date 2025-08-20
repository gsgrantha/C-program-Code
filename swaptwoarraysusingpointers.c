#include <stdio.h>
int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    int temp, i;

    int *p1 = arr1;
    int *p2 = arr2;
        for (i = 0; i < 3; i++) {
            temp = *(p1 + i);
            *(p1 + i) = *(p2 + i);
            *(p2 + i) = temp;
        }
    printf("Array 1: ");
        for (i = 0; i < 3; i++) {
            printf("%d ", arr1[i]);
        }
    printf("\nArray 2: ");
        for (i = 0; i < 3; i++) {
            printf("%d ", arr2[i]);
}
return 0;
}
