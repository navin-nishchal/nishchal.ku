#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{

    int dec=0,weight=1;
    int arr1[8]={0,0,0,0,1,0,0,0};
    for (int i = 0; i < 8; i++)
    {
        
        dec=dec+arr1[7-i]*weight;
        weight=weight*2;
    }
    printf("%d",dec);
    
    
}
