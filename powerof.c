#include <stdio.h>

int main()
{
    int b, n;
    printf("base\n");
    scanf("%d", &b);
    printf("power\n");
    scanf("%d", &n);
    const int l = b;
    for (int i = 1; i < n; i++)
    {
        b = b * l;
    }
    printf("value is %d.", b);
}