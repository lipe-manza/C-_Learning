#include <bits/stdc++.h>
using namespace std;

double maxAver(int nums[], int k, int n)
{
    double soma = 0;

    for (int i = 0; i < k; i++)
        soma += nums[i];

    double maxSoma = soma;

    for (int i = k; i < n; i++)
    {

        soma += nums[i] - nums[i - k];

        if(maxSoma < soma) maxSoma = soma;
    }

    return maxSoma / k;
}


