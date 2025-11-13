#include "Static_mathrix_header.h"

void Input(int matrix[N][M])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void Menu(int matrix[N][M])
{
    char choice = 'y';
    printf("Welcome to menu!!\n");
    while ((choice == 'y') || (choice == 'Y'))
    {
        printf("What exact function do you want to perform?\n");
        printf("You need just to write a number, then press [ENTER]\n");
        printf("1 - Input\n");
        printf("2 - Print\n");
        printf("3 - Transportation\n");
        printf("Function number: ");
        int func_num;
        scanf("%d", &func_num);

        switch (func_num)
        {
        case 1:
            Input(matrix);
            break;
        case 2:
            Print(matrix);
            break;
        case 3:
            Transportation(matrix);
            break;
        default:
            printf("Invalid function number.\n");
        }

        printf("Would you like to continue? (y/n): ");
        getchar();
        choice = (char)getchar();
        //while (choice != 'y')
        //{
        //    /* code */
        //}
    }
    
    printf("return to main()\n");
}

void Print(int matrix[N][M])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Transportation(int matrix[N][M])
{

}