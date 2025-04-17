#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r"); // Open the file for reading
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    FILE *output = fopen("copy_example.txt", "w"); // Open the file for writing
    if (output == NULL)
    {
        printf("Error opening output file!\n");
        fclose(file); // close the input file
        return 1;
    }

    char ch;
    // Read each character and write to another file
    while ((ch = fgetc(file)) != EOF)
    {
        fputc(ch, output); // Write each character to the output file
    }

    // Closing both files
    fclose(file);
    fclose(output);

    printf("File copied successfully.\n");

    return 0;
}
