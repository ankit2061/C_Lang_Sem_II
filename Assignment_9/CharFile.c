// Count total number of characters, vowels, and spaces of a text file.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *sourceFile;
    char sourceFileName[100] = "Words.txt", ch;
    int char_count = 0, vow_count = 0, space_count = 0;

    // Open Source File for reading
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file %s\n", sourceFileName);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        char_count++;

        // Convert character to lowercase for easy comparison
        ch = tolower(ch);

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vow_count++;

        // Check for space
        if (ch == ' ')
            space_count++;
    }

    // Output the results
    printf("Total characters: %d\n", char_count);
    printf("Total vowels: %d\n", vow_count);
    printf("Total spaces: %d\n", space_count);

    // Close the file
    fclose(sourceFile);

    return 0;
}
