#include <bits/stdc++.h>
using namespace std;
bool safe(vector<vector<int>> &board, int row, int col, int n)
{
    // 3 conditons
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 1)
        {
            return false;
        }
    }
    int i = row;
    int j = col;

    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--, j--;
    }
    i = row, j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i++, j--;
    }
    return true;
}
void nqueens(int n, vector<vector<int>> &board, int col)
{
    if (col >= n)
    {

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout << board[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (safe(board, row, col, n))
        {
            board[row][col] = 1;
            nqueens(n, board, col + 1);
            board[row][col] = 0;
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    
    nqueens(n,board, 0);
}
