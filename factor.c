#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("factors are :> {");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("}");
    return 0;
}