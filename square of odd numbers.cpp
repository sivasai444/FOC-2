#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i * i;
        }
    }

    printf("Sum of squares of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
