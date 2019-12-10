#include <stdio.h>
int fibonachi(int);

int main()
{
    int num,result;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("No Answer\n");
    }
    else
    {
        result = fibonachi(num);
        printf("The %d number is %d\n", num, result);
    }
    return 0;
}
int fibonachi(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibonachi(num - 1)+ fibonachi(num - 2));
    }
}
