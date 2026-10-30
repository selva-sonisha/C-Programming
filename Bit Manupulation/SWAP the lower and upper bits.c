SWAP THE LOWER AND UPPER BITS

#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t value, result;
    printf("Enter an 8-bit hexadecimal value: ");
    scanf("%hhx", &value); 
    result = (uint8_t)((value << 4) | (value >> 4));
    printf("Original = 0x%02X\n", value); 
    printf("Swapped  = 0x%02X\n", result); 
    return 0;
}
