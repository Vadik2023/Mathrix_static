#include "Static_mathrix_header.h"
#include "Static_mathrix_functions.c"

int main()
{
    int n;
    int *p_n = &n;
    int m;
    int *p_m = &m;

    printf("\nInput number of lines: ");
    scanf("%d", &n);

    printf("Input number of columns: ");
    scanf("%d", &m);
    printf("\n");

    int matrix[n][m];
    
    Input(p_n, p_m, matrix);
    Menu(p_n, p_m, matrix);

    return 0;
}