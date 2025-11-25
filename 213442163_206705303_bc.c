#include <stdio.h>
#include <stdlib.h>

//gets a decimal number num and a base, and prints num converted to base
void to_base(int num, int base)
{
    if (num){
        unsigned int rem;
        div_t result = div(num, base);
        rem = result.rem;
        to_base(result.quot, base);
        if (rem <10){
            putchar(rem+'0');
        }
        else{
            putchar(rem+87);
        }
    }

}





int main()
{
    int num, base_a, base_b;
    printf("Enter the source base: \n");
    scanf("%d", &base_a);
    if ((base_a<2)||(base_a>16)){
        printf("Invalid source base! \n");
        return 0;
    }

    printf("Enter the target base: \n");
    scanf("%d", &base_b);
    if ((base_b<2)||(base_b>16)){
        printf("Invalid source base! \n");
        return 0;
    }

    printf("Enter a number in base %d: \n", base_a);
    scanf("%x", &num);

    // Print the number the user typed
    printf("Your number in base %d is: ", base_b);
    printf ("\n");

    return 0;
}
