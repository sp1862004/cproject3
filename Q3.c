// Q.3 Digit Addition
// Develop a Program to find the sum of a number's first and last digits.

#include <stdio.h>

int main() {
    int number, first_digit, last_digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;  
    }

    last_digit = number % 10;

    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;  
    }

    int sum = first_digit + last_digit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
