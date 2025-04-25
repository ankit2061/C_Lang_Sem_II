#include <stdio.h>

int a, b;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b); // Pass addresses
    
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
