#include <stdio.h>

int main()
{
    long long n, i, arr[10000000], num = 0, j = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[j] = i;
            num++;
            j++;
        }
    }
    printf("%lld ", num);
    for (i = 0; i < num; i++)
    {
        printf("%lld ", arr[i]);
    }
    return 0;
}