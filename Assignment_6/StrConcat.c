#include <stdio.h>

int main() {
    char str1[100], str2[100], str[200], character;
    int c1 = 0, i, c2 = 0, k = 0;

    printf("Enter First String:\n");
    do {
        character = getchar();
        str1[c1] = character;
        c1++;
    } while (character != '\n');
    str1[c1 - 1] = '\0';  // Remove newline

    printf("Enter Second String:\n");
    do {
        character = getchar();
        str2[c2] = character;
        c2++;
    } while (character != '\n');
    str2[c2 - 1] = '\0';  // Remove newline

    printf("You entered - String1: %s\n", str1);
    printf("You entered - String2: %s\n", str2);

    for (i = 0; i < c1 - 1; i++) {  // c1-1 because last is \0
        str[i] = str1[i];
    }

    printf("str part 1: %s\n", str);

    for (k = 0; k < c2 - 1; k++, i++) {
        str[i] = str2[k];
    }

    str[i] = '\0';  // Null-terminate the concatenated string

    printf("str part 2: %s\n", str);
    printf("Concatenated String: %s\n", str);

    return 0;
}
