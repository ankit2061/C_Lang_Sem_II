#include <stdio.h>

int main() {
    char line[1000], ch;
    int i = 0, words = 0, spaces = 0, characters = 0;

    printf("Enter a line of line:\n");

    // Input the entire line
    do {
        ch = getchar();
        line[i] = ch;
        i++;
    } while (ch != '\n');

    line[i - 1] = '\0'; // Remove newline character

    for (i = 0; line[i] != '\0'; i++) {
        characters++;

        if (line[i] == ' ') {
            spaces++;
        }

        // Count word when we find the first character or space before a character
        if ((i == 0 && line[i] != ' ') || 
           (line[i] != ' ' && line[i - 1] == ' ')) {
            words++;
        }
    }

    printf("\nCharacters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Spaces: %d\n", spaces);

    return 0;
}
