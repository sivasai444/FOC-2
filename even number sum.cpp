#include <stdio.h>

int main() {
    int n;  
    int sum = 0;  

    printf("Enter the number of even numbers to sum: ");
    scanf("%d", &n);

    for (int i = 2; n > 0; i += 2) {
        sum += i;
        n--;
    }

    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}
