#include <stdio.h>
#include <string.h> // For strcpy

typedef struct Student
{
    char name[50];
    int age;
    float grade;
} Student;

// Function to print and modify the student details (pass by reference)
void printStudent(Student *student)
{
    printf("Original Name: %s\n", student->name);

    // Modifying the name using a pointer
    strcpy(student->name, "Ayush"); // Use strcpy to change the name
    printf("Modified Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Grade: %.2f\n", student->grade);
}

int main()
{
    Student student1 = {"Bob", 22, 3.8};

    // Passing the address of student1 to the printStudent function
    printStudent(&student1); // Pass by reference (pointer to student1)

    // After returning from the function, the original student's name has been modified
    printf("\nIn main after function call:\n");
    printf("Name: %s\n", student1.name); // Now the name should be "Ayush"
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
