#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c && c == a)
            printf("1");
        else if ((a == b && b != c) || (a == c && c != b) || (b == c & c != a))
            printf("2");
        else
            printf("3");
    }
    else
        printf("-1");
    return 0;
}