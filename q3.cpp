#include<stdio.h>
int main() {
    int mat[4][4],n=4, i, j;
    int zeroCount = 0;
 printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }
printf("\nMatrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int totalElements = n * n;
    if (zeroCount > totalElements / 2) {
        printf("\nThe matrix is a sparse matrix.\n");
    } else {
        printf("\nThe matrix is NOT a sparse matrix.\n");
    }

    return 0;
}

