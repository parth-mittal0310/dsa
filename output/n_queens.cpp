#include <iostream>
#include <cmath>
using namespace std;

int board[20], n;

bool isSafe(int row, int col) {
    for (int i = 1; i < row; i++)
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return false;
    return true;
}

void printSolution() {
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++)
            cout << (board[r] == c ? "Q " : ". ");
        cout << "\n";
    }
    cout << "\n";
}

void solve(int row) {
    if (row > n) { printSolution(); return; }
    for (int col = 1; col <= n; col++)
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
}

int main() {
    cin >> n;
    solve(1);
}
