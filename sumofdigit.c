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
        result = result + rem;
    }
    printf("%d is sum of the digits of %d.  ", result, n);
    return 0;
}
