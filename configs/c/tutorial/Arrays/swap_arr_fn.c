#include <stdio.h>

void revarr(int *ptr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    revarr(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void revarr(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - 1 - i] = temp;
    }
}
