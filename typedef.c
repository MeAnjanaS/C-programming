#include <stdio.h>
#include<string.h>
typedef struct Student {
    int id;
    char name[30];
    float marks;
} Student;

int main() {
    Student s1;  //= {101, "Anjana", 95.5};
	s1.id=101;
	strcpy(s1.name, "Anjana");
	s1.marks=95;
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
