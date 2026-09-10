#include <stdio.h>

int reverse(int *a) {
    int temp;
    int n = 5;

    for (int i = 0; i < n / 2; i++) {
        temp = *(a + i);
        *(a + i) = *(a + (n - 1 - i));
        *(a + (n - 1 - i)) = temp;
    }

    return 0;
}

int main() {
    int a[5] = {0, 1, 2, 3, 4};

    printf("Before Reverse: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    reverse(a);

    printf("\nAfter Reverse: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
