#include <stdio.h>
int main()
{
    int r, c, i, j;
    int m1[10][10], m2[10][10], dif[10][10];
    printf("rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("first matrix:\n");
    for (i=0; i<r; i++)
        for (j=0; j<c; j++)
            scanf("%d", &m1[i][j]);
    printf("second matrix:\n");
    for(i=0; i<r; i++)
        for (j=0; j<c; j++)
            scanf("%d", &m2[i][j]);
    for(i=0; i<r; i++) {
        for(j = 0; j<c; j++) {
            dif[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("sub of matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
            printf("%d ", dif[i][j]);
        printf("\n");
    }
    return 0;
}

