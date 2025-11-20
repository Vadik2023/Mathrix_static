#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 3

int main(void) {
    int a[N][M];
    int tmp[M];

    puts("Enter 6 integers for a 2x3 matrix (row-wise):");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (scanf("%d", &a[i][j]) != 1) {
                fprintf(stderr, "Invalid input\n");
                return 1;
            }
        }
    }

    puts("\nBefore swap:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%d ", a[i][j]);
        }
        putchar('\n');
    }

    /* swap first and second row using tmp */
    for (int j = 0; j < 3; ++j) tmp[j] = a[0][j];
    for (int j = 0; j < 3; ++j) a[0][j] = a[1][j];
    for (int j = 0; j < 3; ++j) a[1][j] = tmp[j];

    puts("\nAfter swap:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%d ", a[i][j]);
        }
        putchar('\n');
    }

    return 0;
}