#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s[5];
    int i, toppidx=0;
    printf("Enter details of students\n");
    for(int i=0;i<5;i++){
        printf("\nStudent %d\n",i + 1);
        printf("Roll number: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
    for(int i=1;i<5;i++){
        if(s[i].marks>s[toppidx].marks){
            toppidx=i;
        }
    }
    printf("\n Topper deatils:\n");
    printf("Roll Number: %d\n", s[toppidx].roll);
    printf("Name: %s\n", s[toppidx].name);
    printf("Marks: %.2f\n", s[toppidx].marks);
    
}