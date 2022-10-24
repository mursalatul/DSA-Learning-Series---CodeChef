#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}