#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int f(x);
    int sum=f(x-1);
    for(int i=1;i<=3;i++)
    {
        f(x)=sum+(i-1)f(x-i);
        sum=f(x);
    }
    printf("%d",sum);
    return 0;
}

