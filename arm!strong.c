#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, rem, result = 0;
    scanf("%d", &n);
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem * rem * rem;
    }
    if (result == n)
    {
        printf("yehh!! %d is arm strong num 37", result);
    }
    else
    {
        printf("soryy!! not a arm strong num ");
    }
}