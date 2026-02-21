#include <stdio.h>
#include<string.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int a, b;
    char choice[10];
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };
    char *op[]={"add","subtract","multiply","divide"};
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("Enter choice (1-4): ");
    scanf("%s", choice);
    int found=1;
    for(int i=0;i<4;i++){
        if(strcmp(choice,op[i])==0){
            int res=operations[i](a,b);
            printf("Result =%d\n",res);
            found=1;
            break;
        }
    }
    if(!found){
        printf("Invalid choice!\n");
    }
    
    return 0;
}
