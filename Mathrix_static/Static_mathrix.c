#include "Static_mathrix_header.h"
#include "Static_mathrix_functions.c"

int main()
{
    int matrix[N][M];
    int T_matrix[M][N];
    bool isTrans = false;
    bool *p_isTrans = &isTrans;
    
    Input(matrix, T_matrix, p_isTrans);
    Menu(matrix, T_matrix, p_isTrans);

    return 0;
}