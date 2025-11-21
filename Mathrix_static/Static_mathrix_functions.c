#include "Static_mathrix_header.h"

void Input(int *p_n, int *p_m, int matrix[*p_n][*p_m])
{
    printf("Please, write matrix elements\n");

    for (int i = 0; i < *p_n; i++)
    {
        for (int j = 0; j < *p_m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void Menu(int *p_n, int *p_m, int matrix[*p_n][*p_m])
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
        printf("0 - Exit\n");
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
            Input(p_n, p_m, matrix);
            break;
        case 2:
            Print(p_n, p_m, matrix);
            break;
        case 3:
            Transpose(p_n, p_m, matrix);
            break;
        case 0:
            Exit();
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
            do
            {
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


void Print(int *p_n, int *p_m, int matrix[*p_n][*p_m])
{
    printf("Your matrix:\n");

    for (int i = 0; i < *p_n; i++)
    {
        for (int j = 0; j < *p_m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void Transpose(int *p_n, int *p_m, int matrix[*p_n][*p_m])
{
    int old_n = *p_n;
    int old_m = *p_m;

    int tmp[old_m][old_n];

    // переносимо значення
    for (int i = 0; i < old_n; i++)
        for (int j = 0; j < old_m; j++)
            tmp[j][i] = matrix[i][j];

    // перезаписуємо назад у A
    for (int i = 0; i < old_m; i++)
        for (int j = 0; j < old_n; j++)
            matrix[i][j] = tmp[i][j];

    // оновлюємо розміри
    *p_n = old_m;
    *p_m = old_n;

    printf("Matrix has been transported\n");
}

void Exit()
{
    exit(0);
}