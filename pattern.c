#include <stdio.h>
int main()
{
    int i, j, n;

    scanf("%d", &n);

    int flag = n;
    int f = (2 * n) - 1;

    int arr[n][n];

    for (int i = 0; i < f; i++)
    {
        for (j = i; j < f; j++)
            printf("%d ", n);
        printf("\n");
    }
}