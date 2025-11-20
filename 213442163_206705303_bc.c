#include <stdio.h>

int main()
{
    int num, base_a, base_b;
    printf("Enter the source base: \n");
    scanf("%d", &base_a);

    printf("Enter the target base: \n");
    scanf("%d", &base_b);

    printf("Enter a number in base %d: \n", base_a);
    scanf("%x", &num);

    // Print the number the user typed
    printf("Your number in base %d is: %x \n", base_b, num);

    return 0;
}
