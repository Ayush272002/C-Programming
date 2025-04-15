#include <stdio.h>

// Define a structure called 'Student'
// struct Student
// {
//     char name[50];
//     int age;
//     float grade;
// };

typedef struct Student
{
    char name[50];
    int age;
    float grade;
} Student;

int main()
{
    // Declare a variable of type 'Student'
    // struct Student student1;
    Student student1;

    // Assign values to the fields of student1
    snprintf(student1.name, sizeof(student1.name), "John Doe");
    student1.age = 20;
    student1.grade = 3.75;

    // Print the values of the student's fields
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %.2f\n", student1.grade);

    return 0;
}
