#include <stdio.h>

union Student
{
    int id;
    float marks;
    char grade;
};

int main()
{
    union Student s;

    s.id = 101;
    printf("ID = %d\n", s.id);

    s.marks = 85.5;
    printf("Marks = %.2f\n", s.marks);

    s.grade = 'A';
    printf("Grade = %c\n", s.grade);

    return 0;
}
