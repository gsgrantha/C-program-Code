#include <stdio.h>
int main(){
    int r1, c1, r2, c2, i, j, k;
    int m1[10][10], m2[10][10], prod[10][10];
    printf("rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2){
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    printf("first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            prod[i][j] = 0;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                prod[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}
