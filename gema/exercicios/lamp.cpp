#include <bits/stdc++.h>

using namespace std;

int main()
{

    bool ia = 0;
    bool ib = 0;
    bool fa = 0;
    bool fb = 0;

    cin >> ia >> ib >> fa >> fb;
    int count = 0;

    if (ib != fb)
    {
        ia = !ia;
        ib = !ib;
        count++;
    }
    if (ia != fa)
    {
        ia = !ia;
        count++;
    }

    cout << count;
    return 0;
}
