#include <stdio.h>
int fact(int input)
{
    if (input == 0)
        return 1;
    else
        return input * fact(input - 1);
}
int main()
{
    //variabl
    /* int b = 1, n;
    //input
    scanf("%d", &n);
    //logic
    for (int i = 1; i <= n; i++)
    {
        b = b * (i);
    }*/
    //output
    printf("%d", fact(5));
    return 0;
}