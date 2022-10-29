#include <iostream>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll rev(ll n)
{
    ll ans = 0;
    while(n)
    {
        ans = (ans * 10) + (n % 10);
        n /= 10;
    }
    return ans;
}

int main()
{
    ll t, n;
    for (cin >> t;t--;)
    {
        cin >> n;
        cout << rev(n) << "\n";
    }
    return 0;
}