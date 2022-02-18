#include <stdio.h>

void main()
{
    int a = 69;
    int *b; // int *b = &a;
    b = &a;
    printf("the value of a is %d \n", a);
    printf("the value of a is %d \n", *b);
    printf("the value of a is %d \n", *(&a));
    printf("Address of a is %u \n", &a);
    printf("Address of a is %u \n", b);
    printf("Address of b is %d\n", &b);
}