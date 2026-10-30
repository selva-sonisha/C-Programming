#include <stdio.h>

int main()
{
    int n;

    printf("Enter 1, 2, or 3: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Red");
            break;

        case 2:
            printf("Blue");
            break;

        case 3:
            printf("Green");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
