#include <stdio.h>
void inputMatrix(int n, int matrix[n][n]) {
    printf("Enter the elements of %d×%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int n, int matrix[n][n]) {
    printf("Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size of matrix (n): ");
    scanf("%d", &n);
    int matrix[n][n];
    inputMatrix(n, matrix);
    printMatrix(n, matrix);

    return 0;
}
