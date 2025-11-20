#include "Static_mathrix_header.h"

void Input(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans)
{
    printf("Please, write matrix elements\n");

    if(*p_isTrans) //после применения команды Transportation, будет этот блок отрабатывать
    {
        //сканирование консоли, заполнение "транспорированной" матрицы елементами пользователя
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf("%d", &T_matrix[i][j]);
            }
        }

        //изменение "обычной" матрицы под действием "транспорированной"
        for (int i = 0; i < N; i++) 
        {
            for (int j = 0; j < M; j++)
            {
                matrix[i][j] = T_matrix[j][i];
            }
        }
    }
    else //стандартный ход алгоритма: через обычную матрицу создаем транспорированную
    {
        //сканирование консоли, заполнение "обычной" матрицы елементами пользователя
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        //заполнение/присваивание "транспорированной" матриц-ы/-е элемент-ами/-ов с "обычной"
        for (int i = 0; i < N; i++) 
        {
            for (int j = 0; j < M; j++)
            {
                T_matrix[j][i] = matrix[i][j];
            }
        }
    }
}

void Menu(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans)
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
            Input(matrix, T_matrix, p_isTrans);
            break;
        case 2:
            Print(matrix, T_matrix, p_isTrans);
            break;
        case 3:
            Transportation(p_isTrans);
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


void Print(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans)
{
    printf("Your matrix:\n");

    if(*p_isTrans)
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", T_matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
}

void Transportation(bool *p_isTrans)
{
    printf("Matrix has been transported\n");

    *p_isTrans = !(*p_isTrans);
}

void Exit()
{
    exit(0);
}