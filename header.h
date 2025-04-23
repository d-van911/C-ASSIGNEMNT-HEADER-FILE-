

#include <stdio.h>
#include <math.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int is_even(int num) {
    return num % 2 == 0;
}

int is_armstrong(int num) {
    int sum = 0, original = num, digits = 0, temp = num;

    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}