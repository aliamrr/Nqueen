#include <bits/stdc++.h>
#define N 4
bool solveNQUtil(int board[N][N], int col)
{
    // base case: If all queens are placed
    // then return true
    if (col >= N)
        return true;
 
    // Consider this column and try placing
    // this queen in all rows one by one
    for (int i = 0; i < N; i++) {
         
        // Check if the queen can be placed on
        // board[i][col]
        if (isSafe(board, i, col)) {
             
            // Place this queen in board[i][col]
            board[i][col] = 1;
 
            // recur to place rest of the queens
            if (solveNQUtil(board, col + 1))
                return true;
 
            // If placing queen in board[i][col]
            // doesn't lead to a solution, then
            // remove queen from board[i][col]
            board[i][col] = 0; // BACKTRACK
        }
    }
 
    // If the queen cannot be placed in any row in
    // this column col  then return false
    return false;
}
