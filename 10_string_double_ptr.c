#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char **names = (char **)malloc(n * sizeof(char *));

    if (names == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // loop to allocate memory for each string
    for (int i = 0; i < n; i++)
    {
        names[i] = (char *)malloc(20 * sizeof(char));

        if (names[i] == NULL)
        {
            printf("Memory allocation failed for name %d\n", i);
            return 1;
        }
    }

    // get names from user
    getchar(); // to consume leftover newline
    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], 20, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character
        // It scans through the string (from left to right). It stops as soon as it finds any character from the second string.
    }

    // Print the names
    printf("\nEntered names are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(names[i]); // Free each individual string
    }
    free(names); // Free the array of pointers

    return 0;
}