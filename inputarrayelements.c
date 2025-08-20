#include <stdio.h>
int main()
{
    int n;
    printf("size of array: ");
    scanf("%d", &n);
    int a[n],i;
    for(i = 0; i < n; i++) {
        printf("element no. %d: ", i + 1);
        scanf("%d", (a + i));
    }
    printf("Array elements: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    return 0;
}

