#include <stdio.h>
int posarr(int *ptr, int n);
int main()
{
    int arr[] = {1, 2, 3, -4, 5, 6, 7};
    printf("%d", posarr(arr, 7));
    return 0;
}

int posarr(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] > 0 ? cnt++ : 0;
    }
    return cnt;
}