#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdio.h>

int MaxCommonFactor(int a, int b);
main()
{
    int a, b, x;
    scanf("%d%d", &a, &b);
    x = MaxCommonFactor(a, b);
        printf("%d\n", x);
}

int MaxCommonFactor(int a, int b)
{
    if (a <= 0 || b <= 0)
        return -1;
    else if (a != b)
    {
        if (a > b)
            return MaxCommonFactor(a - b, b);
        else if (b > a)
            return MaxCommonFactor(b - a, a);
    }
    else
        return a;
}
