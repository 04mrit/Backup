#include <stdio.h>

int fibn(int n);

void main()
{
    int n = 69, i = 0;
    printf("fibonacci series of %d numbers is \n", n);
    while (i < n)
    {
        printf("%d>   %d\n",i, fibn(i));
        i++;
    }
}

int fibn(int n)
{
    int result = 0;
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    else
    {
        result = fibn(n - 1) + fibn(n - 2);
        return result;
    }
}
