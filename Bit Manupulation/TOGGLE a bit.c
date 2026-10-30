TOGGLE BIT 1

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x05;

    printf("Before Toggling bit: 0x%02X\n", reg);
    reg^=(1<<1);
    printf("After Toggling bit:  0x%02X\n", reg);

    return 0;
}
