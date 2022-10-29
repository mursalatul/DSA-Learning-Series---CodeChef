#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()

int main()
{
    fastIO();
    ll t, n;
    for (cin >> t; t--;)
    {
        string s, s1, s2;
        cin >> s;
        if (s.size() % 2)
            s.erase(s.size() / 2, 1);
        s1 = s.substr(0, s.size() / 2);
        s2 = s.substr(s.size() / 2);
        sort(all(s1));
        sort(all(s2));
        if (s1.compare(s2))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

// time complexity = O(n log n)