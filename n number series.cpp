#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer for 'n'.\n");
    } else {
        printf("Number series from 1 to %d:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

����return�0;
}
