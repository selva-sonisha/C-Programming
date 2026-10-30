CLEAR BIT 2

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x0F;

    printf("Before clearing bit: 0x%02X\n", reg);
    reg&=~(1<<2);
    printf("After clearing bit:  0x%02X\n", reg);

    return 0;
}
