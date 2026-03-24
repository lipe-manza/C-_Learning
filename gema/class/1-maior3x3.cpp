#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matriz(3, vector<int>(3));
    int maior = -100;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
            if (maior < matriz[i][j])
                maior = matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] == maior)
                matriz[i][j] = -1;
            std ::cout << matriz[i][j] << ' ';
        }
        std ::cout << endl;
    }

    switch (3) case 3 : std :: cout << "certo" << endl;
            
    return 0;
}