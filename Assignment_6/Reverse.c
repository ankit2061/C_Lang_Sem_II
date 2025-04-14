#include <stdio.h>

int main() {
    char line[100], revlin[100], character;
    int c = 0, i;

    printf("Enter text. Press <return> at the end.\n");

    // Input until newline
    do {
        character = getchar();
        line[c] = character;
        c++;
    } while (character != '\n');

    line[c - 1] = '\0'; // Replace '\n' with null terminator
    c = c - 1;          // Adjust count to actual string length

    printf("You entered: %s\n", line);

    // Reverse the string
    for (i = 0; i < c; i++) {
        revlin[i] = line[c - 1 - i];
    }

    revlin[c] = '\0'; // Null-terminate reversed string

    printf("Reversed String: %s\n", revlin);

    return 0;
}
