#include<stdio.h>
int main()
{
    char msg[20];

    printf("Enter the Message: ");
    scanf("%19s", msg);

    printf("The Message is: %s\n", msg);

    while (getchar() != '\n');


    printf("Enter the Message: \n");
    fgets(msg, sizeof(msg), stdin);

    printf("The Message is: %s\n", msg);

    return 0;
}
