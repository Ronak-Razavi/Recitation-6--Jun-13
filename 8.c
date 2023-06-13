#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int x = 2; x * x <= n; x++) {
        if (n % x == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
