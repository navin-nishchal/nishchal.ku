#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    char str[10000];
    scanf("%d\n",&n);
    for (int i = 0; i < n; i++)
    {
        gets(str);
        for (int i = 0; i < strlen(str); i+=2)
        {
            printf("%c",str[i] );

        }
        printf(" ");
        for (int i = 1; i < strlen(str); i+=2)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }    
    return 0;
}
