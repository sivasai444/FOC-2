#include <stdio.h>

int main() {
    int octalNumber = 040; 

    
    int binaryNumber = 0;
    int decimalBase = 1; 

    while (octalNumber > 0) {
        int octalDigit = octalNumber % 10;
        octalNumber /= 10;

        
        int binaryDigit = 0;
        int temp = octalDigit;
        int placeValue = 1;

        while (temp > 0) {
            binaryDigit += (temp % 2) * placeValue;
            temp /= 2;
            placeValue *= 10;
        }

        
        binaryNumber += binaryDigit * decimalBase;
        decimalBase *= 1000; 
    }

    /
    printf("Binary: %d\n", binaryNumber);
    return 0;
}


