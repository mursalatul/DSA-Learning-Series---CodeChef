#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()

int main()
{
    fastIO();
    ll t;
    for (cin >> t; t--;)
    {
        string s, s1, s2;
        cin >> s;
        unordered_map<char, ll> ump1, ump2;
        for (ll i = 0; i < (ll)s.size() / 2; i++)
            ump1[s[i]]++;
        for (ll i = ceil(s.size() / (double)2); i < (ll)s.size(); i++)
            ump2[s[i]]++;
        bool status = true;
        for (auto x: ump1)
        {
            if (ump2.count(x.first) == 0 || ump2[x.first] != x.second)
            {
                status = false;
                break;
            }
        }
        if (status)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// time complexity = O(n)