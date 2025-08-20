#include <stdio.h>
void num(int start, int n) {
    if (start > n)
        return;
    printf("%d ", start);
    num(start + 1, n);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    num(0, n);
    printf("\n");
    return 0;
}

