// Write a C program to check whether a number is a Perfect Number using loops. 
//A Perfect Number is a number whose sum of divisors
//(excluding itself) equals the number.
// Example: 6 → (1 + 2 + 3 = 6)
#include <stdio.h>  // Include standard input-output library

int main() {
    int n, i, sum = 0;  // Declare variables: n (input number), i (loop counter), sum (to store sum of divisors)
    
    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &n);  // Read user input

    // Loop to find proper divisors of n (excluding n itself)
    for(i = 1; i < n; i++) {
        if(n % i == 0) {  // Check if i is a divisor of n
            sum = sum + i;  // Add the divisor to sum
        }
    }

    // Check if sum of divisors equals the original number
    if(sum == n)
        printf("%d is a Perfect Number.\n", n);  // If true, print that it is a perfect number
    else
        printf("%d is not a Perfect Number.\n", n);  // Otherwise, print that it is not a perfect number

    return 0;  // Return 0 to indicate successful program execution
}
