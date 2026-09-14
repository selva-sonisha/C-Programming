#include <stdio.h>

int main() {
    int a[5];
    int large = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (a[i] > large) {
            large = a[i];
        }
    }

    printf("Largest: %d", large);

    return 0;
}
