#include <stdio.h>

int multi(int a, int b)
{
    return (a * b);
}

int diff(int a, int b)
{
    return (a - b);
}

int main()
{
    int m = 10;
    int n = 20;
    int s = multi(m, n);
    printf("Multipliation %d =", s);
    return 0;
}
