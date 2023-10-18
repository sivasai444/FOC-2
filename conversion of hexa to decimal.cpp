#include <stdio.h>
#include <stdlib.h>

int main() {
    char *hexString = "7d";
    long decimalValue = strtol(hexString, NULL, 16);

    printf("Hexadecimal: %s\n", hexString);
    printf("Decimal: %ld\n", decimalValue);

    return 0;

