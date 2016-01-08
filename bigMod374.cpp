#include <stdio.h>
#include <math.h>

int bigMod (long b, long p, long m)
{
    if (p == 0)
    {
        return 1;
    }
    if (p%2 == 0)
    {
        return (bigMod(b, (p/2), m) * bigMod(b, (p/2), m)) % m;
    }
    return (bigMod(b, (p-1), m) * (b%m)) % m;
}

int main()
{
    int b, p, m;
    while (scanf("%d%d%d", &b, &p, &m) == 3)
    {
        printf("%d\n", bigMod(b, p, m));
    }
    return 0;
}

