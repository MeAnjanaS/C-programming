#include<stdio.h>
#include<string.h>
struct Student{
    int roll;
    char name[10];
    float marks;
};
void updatemarks(struct Student *s){
    s->marks=95;
}
void updatemarksval(struct Student s){
    s.marks=90;   // change only copy
}
int main(){
    struct Student s1;
    s1.roll=24;
    strcpy(s1.name,"Anagha");
    s1.marks=80;
    updatemarksval(s1);
    printf("\nAfter Passing by Value:\n");
    printf("Marks: %.2f\n", s1.marks);
    updatemarks(&s1);
    printf("\nAfter Passing by Pointer:\n");
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}