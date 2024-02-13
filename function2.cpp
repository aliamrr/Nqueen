#include <bits/stdc++.h>
#define N 4
using namespace std;
#include "function2.h"


bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
 
    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
 
    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
 
    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
 
    return true;
}
