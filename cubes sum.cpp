#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("The sum of the cubes of the first %d numbers is: %d\n", n, sum);

    return 0;
}
