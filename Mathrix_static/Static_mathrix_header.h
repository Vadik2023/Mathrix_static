#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define N 3
#define M 4

void Input(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans);
void Menu(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans);
void Print(int matrix[N][M], int T_matrix[M][N], bool *p_isTrans);
void Transportation(bool *p_isTrans);
void Exit();