#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("==%d==\n", n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d =%d\n", n, i, n * i);
    }
}
