#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float sal;
};
int main(){
    struct Employee emp[10];
    int i, highidx=0;
    float totsal=0;
    printf("Enter employee details\n");
    for(int i=0;i<10;i++){
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].sal);
        totsal+=emp[i].sal;
        if(emp[i].sal>emp[highidx].sal){
            highidx=i;
        }
    }
    printf("\nTotal Salary Payout: %.2f\n", totsal);
    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\n", emp[highidx].id);
    printf("Name: %s\n", emp[highidx].name);
    printf("Salary: %.2f\n", emp[highidx].sal);
    return 0;
}