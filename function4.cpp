#include <bits/stdc++.h>
#define N 4
using namespace std;
#include "function4.h"


bool solveNQ()
{
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
 
    if (solveNQUtil(board, 0) == false) {
        cout << "Solution does not exist";
        return false;
    }
 
    printSolution(board);
    return true;
}
