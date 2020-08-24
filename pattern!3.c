#include <stdio.h>
#include<conio.h>


int main()
{
    

   //variabl
    int n,i,a=0,b=1,c; ;

    //input
    scanf("%d", &n);

    //logic
    printf("%d %d ",a, b);
    for (int i = 0; i < n-2; i++)
    {
        
      c=a+b;
      a=b;
      b=c;
      printf("%d ",c);
                   
    }

    //output
    //printf("%d", b);
    return 0;
}