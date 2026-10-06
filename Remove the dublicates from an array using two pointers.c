#include <stdio.h>

int remove_duplicates(int *arr, int n)
{
    if (n == 0)
        return 0;

    int *write = arr + 1;

    for (int *read = arr + 1; read < arr + n; read++)
    {
        if (*read != *(write - 1))
        {
            *write = *read;
            write++;
        }
    }

    return write - arr;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;

    int new_length = remove_duplicates(arr, n);

    printf("Length = %d\n", new_length);

    printf("Array = ");
    for (int i = 0; i < new_length; i++)
        printf("%d ", arr[i]);

    return 0;
}
