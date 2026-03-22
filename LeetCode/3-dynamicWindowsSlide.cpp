
//Given a string s, find the length of the longest without duplicate characters.
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxLenght = 0;

        unordered_set<char> map;

        int r = 0;
        int l = 0;
        int n = s.size();

        while (r < n)
        {
            while (map.find(s[r]) != map.end())
            {
                map.erase(s[l]);
                l++;
            }

            map.insert(s[r]);
            r++;
            maxLenght = max(maxLenght, r - l);
        }

        return maxLenght;
    }
};
