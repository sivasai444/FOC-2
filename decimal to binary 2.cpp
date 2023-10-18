#include <stdio.h>

int main() {
    int decimal = 248;
    int binary[8]; 

    for (int i = 7; i >= 0; i--) {
        binary[i] = decimal & 1;
        decimal = decimal >> 1;
    }

    printf("Binary representation: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", binary[i]);
    }
    
    return 0;
}
