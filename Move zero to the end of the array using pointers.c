#include <stdio.h>

void move_zeros(int *arr, int n)
{
    int *write = arr;

    for (int *read = arr; read < arr + n; read++)
    {
        if (*read != 0)
        {
            *write = *read;
            write++;
        }
    }

    while (write < arr + n)
    {
        *write = 0;
        write++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    move_zeros(arr, n);

    printf("Array = ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
