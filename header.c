// Name-devansh dwivedi
// Roll no. 2415000771 (35)
// Section-AF-1

#include <stdio.h>
#include "my.h"

int main() {
    int num1, num2, num3;

    // Fibonacci Series
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num1);
    printf("Fibonacci series up to %d terms: ", num1);
    fibonacci(num1);

    // Even-Odd Checker
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num2);
    printf("%d is %s.\n", num2, is_even(num2) ? "Even" : "Odd");

    // Armstrong Number
    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num3);
    printf("%d is %s an Armstrong number.\n", num3, is_armstrong(num3) ? "" : "not");

    return 0;
}