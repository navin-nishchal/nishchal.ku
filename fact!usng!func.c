#include <stdio.h>
int fact(int n)
{
    int b = 1;
    for (int i = 1; i <= n; i++)
        b = b * (i);
    return b;
}
int main()
{
    int m;
    m = fact(13);
    printf("%d", m);
    return 0;
}