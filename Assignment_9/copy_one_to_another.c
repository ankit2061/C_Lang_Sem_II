#include <stdio.h>
int main()
{
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    // Input File Name
    printf("Enter Source File Name:");
    scanf("%s", sourceFileName);
    printf("Enter the destination file name:");
    scanf("%s", destFileName);
    // fopen:Opens an existing file or creates a new file. It takes the filename and the mode (e.g., read, write, append) as arguments
    // Open Source File in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open Source File in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL)
    {
        printf("Error: Cannot create destination file.\n");
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(sourceFile)) != EOF)
    {                        // fgetc:reads a single character from the source file
        fputc(ch, destFile); // fputc:writes a single character to the destination file
    }
    printf("File copied succesfully.\n");
    // close files
    fclose(sourceFile);
    fclose(destFile);
    // fclose:Closes an opened file. This is important for saving changes and freeing up system resources
    return 0;
}
