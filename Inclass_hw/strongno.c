#include <stdio.h>

int main() {
    int n, i, sum = 0, d, fact = 1, n1;  // Declare necessary variables

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;  // Store the original number for later comparison

    // Process each digit of the number
    while (n != 0) {
        fact = 1;        // Reset factorial to 1 for each digit
        d = n % 10;      // Extract the last digit

        // Calculate factorial of the extracted digit
        for (i = 1; i <= d; i++) {
            fact = fact * i;
        }

        sum = sum + fact;  // Add factorial of the digit to sum
        n = n / 10;        // Remove the last digit
    }

    // Check if the number is a Strong Number
    if (sum == n1)
        printf("%d is a Strong Number.", n1);
    else
        printf("%d is not a Strong Number.", n1);

    return 0;
}
