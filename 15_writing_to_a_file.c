#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w"); // Open the file for writing

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, this is a test file.\n");
    fprintf(file, "This is another line in the file.\n");

    // Closing the file
    fclose(file);

    printf("Data written to file successfully.\n");

    return 0;
}
