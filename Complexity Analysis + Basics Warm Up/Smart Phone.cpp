#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()

int main()
{
    fastIO();
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    ll max_revenue = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] * (n - i) > max_revenue)
            max_revenue = v[i] * (n - i);
    }
    cout << max_revenue;
    return 0;
}