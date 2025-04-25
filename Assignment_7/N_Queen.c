#include <stdio.h>
#include <stdbool.h>

#define MAX 20  // maximum number of queens

int board[MAX];
int N;  // number of queens (and size of the board)

// Function to print the board
void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j)
                printf(" Q ");
            else
                printf(" . ");
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if placing queen at row 'row' and column 'col' is safe
bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col ||               // same column
            board[i] - i == col - row ||     // same major diagonal
            board[i] + i == col + row)       // same minor diagonal
            return false;
    }
    return true;
}

// Recursive function to solve the problem
void solveNQueens(int row) {
    if (row == N) {
        printSolution();
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solveNQueens(row + 1);  // place queen in next row
            // No need to undo board[row] as it'll be overwritten in the loop
        }
    }
}

int main() {
    printf("Enter the number of queens (N): ");
    scanf("%d", &N);

    if (N < 1 || N > MAX) {
        printf("Please enter N between 1 and %d\n", MAX);
        return 1;
    }

    printf("Solutions to %d-Queen Problem:\n\n", N);
    solveNQueens(0);

    return 0;
}
