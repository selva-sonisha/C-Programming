CHECK BIT POSITION 3

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x08;

    if ( reg&=(1<<3) )
        printf("Bit is SET\n");
    else
        printf("Bit is CLEAR\n");

    return 0;
}
