#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary[] = "1"; 
    long decimal = strtol(binary, NULL, 2);

    printf("Binary: %s\nDecimal: %ld\n", binary, decimal);

    return 0;
}
