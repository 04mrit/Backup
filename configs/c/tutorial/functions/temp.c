#include <stdio.h>

float average(int a, int b);

void main()
{
    printf("%.2f\n", average(1, 1));
}

float average(int a, int b)
{
    return (a + b) / 2.0;
}