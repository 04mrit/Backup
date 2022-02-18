#include <stdio.h>

int main()
{
        int a[5];
        int *ptr[2];
        printf("%p\n", &a[0]);
        printf("%p\n", &a[1]);
        printf("%p\n", &a[2]);
        printf("%p\n", &a[3]);
        printf("%p\n", &a[4]);
        printf("%u\n", &a[4] == &a[0]);
        clearerr;
        return 0;
}