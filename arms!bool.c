#include <stdio.h>
#include <math.h>
bool arms(int n);
int main()
{
    int n;
    scanf("%d", &n);
    arms(n);
       
}
bool arms(int n)
{
      int n, m, rem, result = 0;
      m=n;
       while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem * rem * rem;
    }
    if(result==n)? true:false;
}