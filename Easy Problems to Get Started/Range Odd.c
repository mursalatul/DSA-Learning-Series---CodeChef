#include <stdio.h>

int main()
{
    long long l, r;
    scanf("%lld%lld", &l, &r);
    if (l % 2 == 0)
        l++;
    for (l;l <= r; l+=2)
    {
        printf("%lld ", l);
    }
    return 0;
}