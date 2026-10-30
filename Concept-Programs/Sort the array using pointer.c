#include <stdio.h>

int sort(int *a)
{
    int max, min;

    max = a[0];
    min = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int c;

    c = sort(a);

    return 0;
}
