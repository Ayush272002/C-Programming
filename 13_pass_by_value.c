#include <stdio.h>
#include <string.h> 

typedef struct Student
{
    char name[50];
    int age;
    float grade;
} Student;

void printStudent(Student student)
{
    printf("Original Name: %s\n", student.name);

    // Modifying the name within the function
    strcpy(student.name, "Ayush"); // Use strcpy to change the name
    printf("Modified Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %.2f\n", student.grade);
}

int main()
{
    Student student1 = {"Bob", 22, 3.8};

    // Passing the student1 to the printStudent function
    printStudent(student1); // Pass by value (a copy of student1)

    // After returning from the function, the original student's name remains unchanged
    printf("\nIn main after function call:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
