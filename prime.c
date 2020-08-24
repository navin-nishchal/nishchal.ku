#include <stdio.h>
int prime(int n){
    
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
            flag = 1;
        break;
    }

    if (!flag)
        printf("prime");
    else
        printf("not prime");
}
int main()
{
    printf("%s",prime(20));

}
