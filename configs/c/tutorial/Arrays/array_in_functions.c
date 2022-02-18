#include <stdio.h>

void PrintArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", array[i]);
    }
}

// void PrintArray(int *pointer, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n", *(pointer + i));
//     }
// }

void main()
{
    int a[] = {21, 21, 21, 2, 1344, 43};

    int *ptr = a; // int *ptr = &a[6];

    PrintArray(a, 6); // PrintArray(ptr, 6);
}