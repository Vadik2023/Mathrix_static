#include "Static_mathrix_header.h"
#include "Static_mathrix_functions.c"

int main()
{
    int n;
    int m;

    printf("\nInput number of lines: ");
    scanf("%d", &n);

    printf("Input number of columns: ");
    scanf("%d", &m);
    printf("\n");

    int matrix[n][m];
    int T_matrix[m][n];
    bool isTrans = false;
    bool *p_isTrans = &isTrans;
    
    Input(n, m, matrix, T_matrix, p_isTrans);
    Menu(n, m, matrix, T_matrix, p_isTrans);

    return 0;
}