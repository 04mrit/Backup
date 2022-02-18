#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 69;
    swap(&x, &y);
    printf("value of x in %d and value of y is %d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}