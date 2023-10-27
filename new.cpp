bool isSafe(vector<vector<int>> &board, int row, int col, int n)
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

void solve(int col, vector<vector<int>>& ans, vector<vector<int>>& board, int n){
      if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row = 0 ; row < n ;row++){
        if(isSafe(board,row,col,n)){
            board[row][col] = 1;
            solve(col + 1,ans,board,n);
            board[row][col] = 0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    
     vector<vector<int>> board(n,vector<int>(n,0));
     vector<vector<int>> ans;
    solve(0,ans,board,n);
    return ans;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
}ghklghk
