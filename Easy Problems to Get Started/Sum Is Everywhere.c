#include <stdio.h>

int main()
{
    unsigned long long n, osum = 0, esum = 0, i = 1;
    scanf("%llu", &n);
    n *= 2;
    while (n--)
    {
        if (i % 2)
            osum += i;
        else
            esum += i;
        i++;
    }
    printf("%llu %llu", osum, esum);
    return 0;
}