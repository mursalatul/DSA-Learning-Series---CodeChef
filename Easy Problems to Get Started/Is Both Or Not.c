#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("BOTH");
    }
    else if (n % 5 && n % 11)
    {
        printf("NONE");
    }
    else
    {
        printf("ONE");
    }
    return 0;
}