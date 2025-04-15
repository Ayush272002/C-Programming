#include <stdio.h>

typedef struct Student
{
    char name[50];
    int age;
    float grade;
} Student;

int main()
{
    Student student1 = {"Alice", 19, 3.9};

    // Declare a pointer to the struct
    Student *ptr = &student1;

    // Access members using the '->' operator
    printf("Name: %s\n", ptr->name); // Equivalent to (*ptr).name
    printf("Age: %d\n", ptr->age);   // Equivalent to (*ptr).age
    printf("Grade: %.2f\n", ptr->grade); // Equivalent to (*ptr).grade

    return 0;
}
