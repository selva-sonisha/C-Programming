#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s = {101, 85.5};
    struct Student *p;

    p = &s;

    printf("ID = %d\n", p->id);
    printf("Marks = %.1f\n", p->marks);

    return 0;
}
