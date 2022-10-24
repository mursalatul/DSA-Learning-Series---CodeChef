#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start = 1, end = 5;
    int smalltobig = 0, bigtosmall = 0;
    while (n--)
    {
        if (start < end)
        {
            for (start; start <= end; start++)
            {
                printf("%d ", start);
            }
            printf("\n");
            start = end + 5;
            end++;
        }
        else
        {
            for (start; start >= end; start--)
            {
                printf("%d ", start);
            }
            printf("\n");
            start--;
            start = end + 5;
            end = start + 4;
        }
    }
    return 0;
}