#include <stdio.h>

int main()
{
    long long n, i, temp;
    scanf("%lld", &n);
    long long arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    // reversing
    for (i = 0; i < n / 2; i ++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // printing
    for (i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }
    return 0;
}