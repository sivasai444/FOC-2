#include <stdio.h>
#include <math.h>

int main() {
    char binary[] = "1000010";
    int decimal = 0;

    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    printf("Binary: %s\nDecimal: %d\n", binary, decimal);

    return 0;

