#include <stdio.h>
#include <stdlib.h>

int convertToDecimal(int);
void toBase(int, int);

int main() {
    int base_a, base_b;
    printf("Enter the source base: \n");
    
    if (scanf("%d", &base_a) != 1) {
        printf("Error: Invalid source base!\n");
        return 1;
    }

    if (base_a < 2 || base_a > 16) {
        printf("Error: Invalid source base!\n");
        return 1;
    }
    
    while (getchar() != '\n');

    printf("Enter the target base: \n");
    
    if (scanf("%d", &base_b) != 1) {
        printf("Error: Invalid source base!\n");
        return 1;
    }

    if (base_b < 2 || base_b > 16) {
        printf("Error: Invalid source base!\n");
        return 1;
    }
    
    while (getchar() != '\n');
    

    int decimal = convertToDecimal(base_a);

    printf("Your number in base %d is: ", base_b);
    toBase(decimal, base_b);
    printf ("\n");

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

void toBase(int num, int base)
{
    if (num){
        unsigned int rem;
        div_t result = div(num, base);
        rem = result.rem;
        toBase(result.quot, base);
        if (rem <10){
            putchar(rem+'0');
        }
        else{
            putchar(rem+87);
        }
    }

}