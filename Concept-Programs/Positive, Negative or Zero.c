#include <stdio.h>

int main()
{
    int a;

    printf("Enter num: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("+ve num: %d", a);
    }
    else if (a < 0)
    {
        printf("-ve num: %d", a);
    }
    else
    {
        printf("Zero: %d", a);
    }

    return 0;
}
