#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n = 0;
    long long result = 0;

    cin >> n;


    if (n % 2 == 1)
    {
        result = ((n + 1) / 2) * -1;
    }
    else
    {
        result = n / 2;
    }

    cout << result;

    return 0;
}
