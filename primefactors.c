#include <stdio.h>

// Function to find and print prime factors of n
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // Print the number of times 2 divides n
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // Check for odd factors from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is still greater than 2, then n itself is prime
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("No prime factors for numbers less than 2.\n");
    } else {
        primeFactors(n);
    }

    return 0;
}

