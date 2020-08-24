#include <stdio.h>
int prime(int n)
{
    int i, flag = 0;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            flag = 1;
    if (!flag)
        printf("%d  ", n);
}
int main()
{
    int k, j;
    printf("1st no do\n");
    scanf("%d", &k);
    printf("2nd no do\n");
    scanf("%d", &j);
    for (int i = k; i <= j; i++)
        prime(i);
    return 0;
}
