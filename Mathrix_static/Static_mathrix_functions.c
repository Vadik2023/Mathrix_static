#include "Static_mathrix_header.h"

void Input(int matrix[N][M])
{
    printf("Please, write matrix elements\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void Menu(int matrix[N][M])
{
    char choice = 'y';
    printf("\nWelcome to menu!!\n");
    while ((choice == 'y') || (choice == 'Y'))
    {
        printf("What exact function do you want to perform?\n");
        printf("You need just to write a number, then press [ENTER]\n");
        printf("1 - Input\n");
        printf("2 - Print\n");
        printf("3 - Transportation\n");
        printf("Function number: ");

        int func_num;

        // проверка корректного ввода числа
        if (scanf("%d", &func_num) != 1)
        {
            printf("Invalid input. Please enter a number.\n\n");
            while (getchar() != '\n'); // очистка буфера
            continue;
        }

        // очищаем остатки строки после числа (Enter или пробелы)
        int tmp;
        while ((tmp = getchar()) != '\n' && tmp != EOF);

        // выбор функции
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

        // безопасный цикл для вопроса y/n
        while (1)
        {
            printf("\nWould you like to continue? (y/n): ");

            int c;

            // пропускаем все пробелы и Enter от предыдущего ввода
            do {
                c = getchar();
                if (c == EOF) return; // защита
            } while (c == ' ' || c == '\n');

            // очищаем остаток строки после ввода
            while ((tmp = getchar()) != '\n' && tmp != EOF);

            if (c == 'y' || c == 'Y')
                break;
            else if (c == 'n' || c == 'N')
            {
                printf("\nreturn to main()\n");
                return;
            }
            else
                printf("Input invalid answer, try again\n");
        }
    }
}


void Print(int matrix[N][M])
{
    printf("Your matrix:\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void Transportation(int matrix[N][M])
{

}