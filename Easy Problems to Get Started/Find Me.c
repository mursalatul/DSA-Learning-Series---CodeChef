#include <stdio.h>

int main()
{
    long long n, k, i, inp,status = 0;
    scanf("%lld%lld", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &inp);
        if (inp == k)
        {
            status = 1;
        }
    }
    if (status)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
    return 0;
}