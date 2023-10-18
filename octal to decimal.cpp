#include <stdio.h>

int main() {
    long long binary, octal = 0, decimal = 0;
    int octalDigit, place = 1;

    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * place;
        binary /= 10;
        place *= 2;
    }

    
    place = 1;
    while (decimal > 0) {
        octalDigit = decimal % 8;
        octal += octalDigit * place;
        decimal /= 8;
        place *= 10;
    }

    printf("Octal equivalent: %lld\n", octal);

    return 0;
}
