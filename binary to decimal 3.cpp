#include <stdio.h>
#include <math.h>

int main() {
    int binary = 11011;
    int decimal = 0;
    int base = 2;
    int power = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(base, power);
        binary /= 10;
        power++;
    }

    printf("Binary: 11011 is Decimal: %d\n", decimal);
    return 0;
}
