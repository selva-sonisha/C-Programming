#include <stdio.h>

int main()
{
    int x = 8;       // 1000
    x = x | (1 << 2);

    printf("%d", x);
    return 0;
}
