#include <stdio.h>

int main()
{
    int a[5] = {64, 25, 12, 22, 11};
    int i, j, min, temp;

    for(i = 0; i < 4; i++)
    {
        min = i;

        for(j = i+1; j < 5; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
