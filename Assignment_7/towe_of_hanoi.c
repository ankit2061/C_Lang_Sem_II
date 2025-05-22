#include <stdio.h>
#include <math.h>
// Function to solve Tower of Hanoi problem
void towerOfHanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source, target);
        return;
    }
    
    // Move n-1 disks from source to auxiliary using target as helper
    towerOfHanoi(n-1, source, auxiliary, target);
    
    // Move the nth disk from source to target
    printf("Move disk %d from rod %c to rod %c\n", n, source, target);
    
    // Move n-1 disks from auxiliary to target using source as helper
    towerOfHanoi(n-1, auxiliary, target, source);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    // A, B, and C are the names of the rods
    towerOfHanoi(n, 'A', 'C', 'B');
    
    // Calculate and display the total number of moves
    printf("\nTotal number of moves: %.0f\n", pow(2, n) - 1); // 2^n - 1
    
    return 0;
}
