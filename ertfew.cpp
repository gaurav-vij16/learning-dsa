#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<bool>> &visited, int newx, int newy, vector<vector<int>> &board)
{

    if ((newx >= 0 && newx < board.size()) && (newy >= 0 && newy < board[0].size()) && (visited[newx][newy] = false) && (board[newx][newy] = 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool solve(int srcx, int srcy, int destx, int desty, vector<vector<int>> &board, vector<vector<bool>> visited)
{

    // base case
    if (srcx == destx && srcy == desty)
    {
        return true;
    }
    // downcheck
    int newx = srcx + 1, newy = srcy;
    bool downans = false;
    if (isSafe(visited, srcx, srcy, board))
    {
        visited[newx][newy] = true;
        downans = solve(newx, newy, destx, desty, board, visited);
        // backtrack
        visited[newx][newy] = false;
    }
    // right check
    newx = srcx, newy = srcy + 1;
    bool rightans = false;
    if (isSafe(visited, srcx, srcy, board))
    {
        visited[newx][newy] = true;
        rightans = solve(newx, newy, destx, desty, board, visited);
        // backtrack
        visited[newx][newy] = false;
    }

    // leftcheck
    newx = srcx, newy = srcy - 1;
    bool leftans = false;
    if (isSafe(visited, srcx, srcy, board))
    {
        visited[newx][newy] = true;
        leftans = solve(newx, newy, destx, desty, board, visited);
        // backtrack
        visited[newx][newy] = false;
    }

    // upcheck
    newx = srcx - 1, newy = srcy;
    bool upans = false;
    if (isSafe(visited, srcx, srcy, board))
    {
        visited[newx][newy] = true;
        upans = solve(newx, newy, destx, desty, board, visited);
        // backtrack
        visited[newx][newy] = false;
    }
    if (downans || rightans || leftans || upans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int srcx = 0;
    int srcy = 0;
    int destx = 3;
    int desty = 3;
    vector<vector<int>> board = {{1, 1, 1, 0},
                                 {1, 0, 0, 1},
                                 {1, 1, 1, 1},
                                 {1, 0, 1, 1}};

    vector<vector<bool>> visited(4, vector<bool>(4, false));

    cout << solve(0, 0, 3, 3, board, visited) << endl;
}
