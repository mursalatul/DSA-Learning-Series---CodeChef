#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fastIO()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define all(v) v.begin(), v.end()

int main()
{
    fastIO();
    ull t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        if (n == 1)
        {
            ull x;
            cin >> x;
            cout << 1 << "\n";
        }
        else
        {
            ull a, cars = 1;
            cin >> a;
            for (ull i = 1; i < n; i++)
            {
                ull b;
                cin >> b;
                if (a >= b)
                {
                    cars++;
                    a = b;
                }
            }
            cout << cars << "\n";
        }
    }
    return 0;
}