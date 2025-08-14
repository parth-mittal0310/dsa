#include <iostream>
#include <vector>
using namespace std;
int N;
int maze[10][10];
bool visited[10][10];

bool isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

void solveMazeUtil(int x, int y, vector<pair<int,int>> path) {
    if (x == N - 1 && y == N - 1) {
        path.push_back({x, y});
        for (auto p : path) cout << "(" << p.first << "," << p.second << ") ";
        cout << "\n";
        return;
    }

    visited[x][y] = true;
    path.push_back({x, y});

    if (isSafe(x + 1, y)) solveMazeUtil(x + 1, y, path); 
    if (isSafe(x, y + 1)) solveMazeUtil(x, y + 1, path); 
    if (isSafe(x - 1, y)) solveMazeUtil(x - 1, y, path); 
    if (isSafe(x, y - 1)) solveMazeUtil(x, y - 1, path); 

    visited[x][y] = false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> maze[i][j];

    vector<pair<int,int>> path;
    solveMazeUtil(0, 0, path);
    return 0;
}
