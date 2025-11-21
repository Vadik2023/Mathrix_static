#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void Input(int n, int m, int matrix[n][m], int T_matrix[m][n], bool *p_isTrans);
void Menu(int n, int m, int matrix[n][m], int T_matrix[m][n], bool *p_isTrans);
void Print(int n, int m, int matrix[n][m], int T_matrix[m][n], bool *p_isTrans);
void Transportation(bool *p_isTrans);
void Exit();