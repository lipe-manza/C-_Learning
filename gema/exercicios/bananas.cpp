#include <bits/stdc++.h>

using namespace std;

int main()
{

    int k, n, w;

    cin >> k >> n >> w;

    int total = (k + w * k) * w / 2;


    int lend = total - n;
    if (lend <= 0)
        cout << 0;
    else
        cout << lend;

    return 0;
}
