#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key = 30, i, found = 0;

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
