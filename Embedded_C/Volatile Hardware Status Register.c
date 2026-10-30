VOLATILE HARDWARE STATUS REGISTER

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    volatile uint8_t STATUS_REG = 0x00;

    printf("Waiting for sensor event...\n");

    STATUS_REG = 0x01;

    while ((STATUS_REG & 0x01) == 0)
    {
    }

    printf("Sensor Event Detected\n");

    return 0;
}
