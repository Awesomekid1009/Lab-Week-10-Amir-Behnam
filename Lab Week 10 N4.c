#include <stdio.h>
#include <stdlib.h>
int f(int x,int n);
int main()
{
   int x,n;
   scanf("%d",&x);
   printf("%d",f(x,n));
    return 0;
}
int f(int x,int n)
{
       if(n==3)
        return f(x-(n-1)+(n-1)f(x-n));
        return 1;

    }
