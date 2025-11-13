#include "Static_mathrix_header.h"
#include "Static_mathrix_functions.c"

int main()
{
    int matrix[N][M] = {
        {2, 3, 8, 9},
        {1, 5, 4, 6},
        {7, 1, 2, 3}
    };
    
    Menu(matrix);

    return 0;
}