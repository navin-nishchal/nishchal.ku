#include <stdio.h>

int main()
{
    //variabl
    int b = 1, n;
    //input
    scanf("%d", &n);
    //logic
    for (int i = 1; i <= n; i++)
    {
        b = b * (i);
    }
    //output
    printf("%d", b);
    return 0;
}