READ-MODIFY-WRITE REGISTER
    
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x91;
    uint8_t mode = 2;

    printf("Initial Register : 0x%02X\n", reg);

    reg |= (1u << 0);
    reg |= (1u << 1);
    reg &= (uint8_t)~(3u << 2);
    reg |= (uint8_t)(mode << 2);

    printf("Final Register   : 0x%02X\n", reg);

    return 0;
}
