#include <stdio.h>
int main(){
    int r, c, i, j;
    int m1[10][10], m2[10][10], sum[10][10];
    printf("rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m1[i][j]);
    printf("second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m2[i][j]);
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Sum of matrix:\n");
    for(i=0; i<r; i++) {
        for (j=0; j<c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
