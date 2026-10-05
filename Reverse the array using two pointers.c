#include <stddef.h>

void reverse_array_ptr(int *arr, size_t n)
{
    if (arr == NULL || n < 2)
        return;

    int *left = arr;
    int *right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}
