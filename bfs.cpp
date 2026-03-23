#include <bits/stdc++.h>
using namespace std;

struct Dot
{
    int n, m;
};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void print_table(vector<vector<int>> &matrix, int steps)
{
    this_thread::sleep_for(std::chrono::milliseconds(50));

    cout << "steps:" << steps << endl;
    for (auto &row : matrix)
    {
        for (int cell : row)
        {
            if (cell == 0)
                cout << "\033[37m" << cell << " " << "\033[0m"; // branco
            else if (cell == 1)
                cout << "\033[31m" << cell << " " << "\033[0m"; // vermelho
            else if (cell == 2)
                cout << "\033[34m" << cell << " " << "\033[0m"; // amarelo
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

int bfs(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<bool>> visit(n, vector<bool>(m, false));
    vector<vector<bool>> marked(n, vector<bool>(m, false));

    queue<Dot> line;
    line.push({0, 0});
    marked[0][0] = true; // já colocamos na fila
    int steps = 0;

    while (!line.empty())
    {
        Dot d = line.front();
        line.pop();
        int x = d.n;
        int y = d.m;

        if (!visit[x][y])
        {
            visit[x][y] = true;
            matrix[x][y] = 2; // marcar na matriz, se quiser
            steps++;



            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !marked[nx][ny] && matrix[nx][ny] != 1)
                {
                    line.push({nx, ny});
                    marked[nx][ny] = true; // marca como já colocado na fila
                }
            }
        }
    }

    return steps;
}

int main()
{

    vector<vector<int>> matrix = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0}};

    print_table(matrix,0);
    bfs(matrix);
    print_table(matrix,1000);
    return 0;
}
