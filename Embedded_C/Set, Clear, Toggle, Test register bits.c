SET, CLEAR, TOGGLE, TEST REGISTER BITS
  
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x00;

    reg |= (1u << 3);
    printf("After SET bit 3    : 0x%02X\n", reg);

    reg |= (1u << 5);
    printf("After SET bit 5    : 0x%02X\n", reg);

    reg &= (uint8_t)~(1u << 3);
    printf("After CLEAR bit 3  : 0x%02X\n", reg);

    reg ^= (1u << 1);
    printf("After TOGGLE bit 1 : 0x%02X\n", reg);

    printf("Bit 5: %s\n", (reg & (1u << 5)) ? "SET" : "CLEAR");

    return 0;
}
