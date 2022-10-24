#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    if (n % 6 == 0 || n % 5 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}