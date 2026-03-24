#include <bits/stdc++.h>

int hanoi(int n, int origem, int dest, int temp)
{
    int movimentos = 0;

    if (n == 1)
    {
        std ::cout << "mover o disco da pilha " << origem << " para a pilha " << dest << '\n';
        movimentos++;
    }
    else
    {
        movimentos += hanoi(n - 1, origem, temp, dest);
        std ::cout << "mover o disco da pilha " << origem << " para a pilha " << dest << '\n';
        movimentos += hanoi(n - 1, temp, dest, origem);
    }

    return movimentos;
}

int main()
{

    int n, i = 1;
    std ::cin >> n;

    while (n != 0)
    {
        std ::cout << "teste" << i << '\n'
                   << hanoi(n, 1 , 3 , 2) << '\n';
        std ::cin >> n;
        i++;
    }
}