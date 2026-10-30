GPIO REGISTER CONTROLLER

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t GPIO_REG = 0x00;

    GPIO_REG |= (1u << 3);
    GPIO_REG |= (1u << 5);
    GPIO_REG &= (uint8_t)~(1u << 3);
    GPIO_REG ^= (1u << 6);

    printf("READ bit 5 : %s\n",
           (GPIO_REG & (1u << 5)) ? "ON" : "OFF");

    printf("Final GPIO Register : 0x%02X\n", GPIO_REG);

    return 0;
}
