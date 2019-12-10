#include <stdio.h>
#include <stdlib.h>
int combination(int n, int k)
{
  if (k==0 || k==n)
    return 1;

  return  combination(n-1, k-1) + combination(n-1, k);
}

int main()
{
    int n , k ;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("Value of C(%d, %d) is %d ", n, k, combination(n, k));
    return 0;
}

