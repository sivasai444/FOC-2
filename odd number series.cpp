#include <stdio.h>

int main() {
    int n; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Odd number series: ");
    
    for (int i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        printf("%d ", oddNumber);
    }
    
    return 0;
}
