#include <iostream>
using namespace std;
#include "function1.h"
#include <bits/stdc++.h>
#define N 4


void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
           if(board[i][j])
            cout << "Q ";
           else cout<<". ";
        printf("\n");
    }
}
