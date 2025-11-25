#include <stdio.h>

int convertToDecimal(int);

int main() {
    int base;
    printf("Enter the source base: \n");
    
    if (scanf("%d", &base) != 1) {
        printf("Error: Invalid source base!\n");
        return 1;
    }

    // 3. Validate the input range
    if (base < 2 || base > 16) {
        printf("Error: Invalid source base!\n");
        return 1;
    }
    
    while (getchar() != '\n');

    int decimal = convertToDecimal(base);
    

    return 0;
}

int convertToDecimal(int base) {
    int intDigit;
    char charDigit;
    int decimal = 0;
    printf("Enter a number in base %d: \n", base);

    while ((charDigit = getchar()) != '\n' && charDigit != EOF) {
        if (charDigit >= '0' && charDigit <= '9') {
            intDigit = charDigit - '0';
        }
        else if (charDigit >= 'a' && charDigit <= 'f') {
            intDigit = charDigit - 'a' + 10;
        }
        else {
            printf("\nError: Invalid input number");
            while (getchar() != '\n');
            return -1;
        }

        if (intDigit >= base) {
            printf("\nError: Invalid input number");
            while (getchar() != '\n');
            return -1;
        }

        decimal = decimal * base + intDigit;
    }

    return decimal;
}