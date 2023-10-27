#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkCol(vector<vector<char>> &board, int j, char val)
    {
        for (int i = 0; i < j; i++)
        {
            if (board[i][j] == val)
                return false;
        }
        return true;
    }
    bool checkRow(vector<vector<char>> &board, int i, char val)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == val)
                return false;
        }
        return true;
    }
    bool checkSq(vector<vector<char>> &board, int i, int j, char val)
    {
        int si = (i / 3) * 3, sj = (j / 3) * 3;
        for (int a = 0; a < 3; a++)
        {
            for (int b = 0; b < 3; b++)
            {
                if (board[a + si][b + sj] == val)
                    return false;
            }
        }

        return true;
    }

    //
    bool isSafe(vector<vector<char>> &board, int i, int j, char val)
    {
        return checkRow(board, i, val) && checkCol(board, j, val) && checkSq(board, i, j, val);
    }
    //



    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                    continue;

                for (int val = 1; val < 10; val++)
                {
                    if (isSafe(board, i, j, '0' + val))
                    {
                        board[i][j] = val + '0';
                        bool ans = solve(board);
                        if (ans)
                            return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};
int main()
{
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
}
