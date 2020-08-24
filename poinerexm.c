#include<stdio.h>
int sum(int a,int* str());

int sum(int a,int* str())
{
    int j=0;
    for (int i = 0; i < a; i++)
    {
        j=j+str[i];
    }
    
    return j;
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    int k=sum(int n,int* str());
    printf("%d",k);
    
}