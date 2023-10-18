#include <stdio.h>
#include <stdlib.h>

int main() {
    char hexValue[] = "b1"; 
    long decimalValue;

    
    decimalValue = strtol(hexValue, NULL, 16);

    printf("Hexadecimal: %s\n", hexValue);
    printf("Decimal: %ld\n", decimalValue);

    return 0;
}
