#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int pos = 2, i, n = 5;

    for(i = pos; i < n-1; i++)
    {
        a[i] = a[i+1];
    }

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
