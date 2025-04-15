#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r"); // Open the file for reading

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    char line[100];
    // Reading the file line by line
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line); // Print each line
    }

    // Closing the file
    fclose(file);

    return 0;
}
