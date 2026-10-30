REVERSE THE BIT

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t value, result = 0;

    printf("Enter an 8-bit hexadecimal value: ");
    scanf("%hhx", &value);

    for (int i = 0; i < 8; i++)
    {
        result <<= 1;
        result |= value & 1U;
        value >>= 1;
    }

    printf("Reversed = 0x%02X\n", result);

    return 0;
}
