#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("enter the value for N\n");
    scanf("%d", &m);
    n = (2 * m) - 1;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (j = i; j < n - i; j++)
            arr[i][j] = m - i;
        for (j = i + 1; j <= n - i - 1; j++)
            arr[j][n - i - 1] = m - i;
        for (j = n - i - 2; j >= i; j--)
            arr[n - i - 1][j] = m - i;
        for (j = n - 2 - i; j > i; j--)
            arr[j][i] = m - i;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] < 10)
                printf("%d  ", arr[i][j]);
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
