#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("n should be 2 or greater for even numbers.\n");
    } else {
        printf("Even numbers from 2 to %d: ", n);
        for (int i = 2; i <= n; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
