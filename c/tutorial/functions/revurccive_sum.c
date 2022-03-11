#include <stdio.h>

int sum(int n);

void main()
{
    int n = 6;
    printf("enter a number ");
    scanf("%d", &n);
    printf("sum of numbers upto %d is %d\n", n, sum(n));
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum(n - 1) + n;
    }
}