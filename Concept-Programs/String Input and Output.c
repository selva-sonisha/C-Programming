#include <stdio.h>

int main()
{
    char msg[20];

    puts("Enter the Message:");
    scanf("%19s", msg);

    puts("The Message is:");
    puts(msg);

    while (getchar() != '\n');

    puts("Enter the Message:");
    fgets(msg, sizeof(msg), stdin);

    puts("The Message is:");
    puts(msg);

    return 0;
}
