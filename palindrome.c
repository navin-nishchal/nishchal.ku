#include <stdio.h>
#include <math.h>
int palid(int n);
int palid(int n)
{
    int m, rem;
    scanf("%d", &n);
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        printf("%d", rem);
    }
    
}
int main()
{
    int m,n;
    scanf("%d",&n);
    m= palid(n);
    printf("%d",m);



    return 0;
}