#include<stdio.h>
double add(double a,double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double mul(double a,double b){
    return a*b;
}
double div(double a,double b){
    return (b!=0)?a/b:0;
}
int main(){
    double res, a=10,b=5;
    int choice;
    double (*op[4])(double,double)={add,sub,mul,div};
    printf("Choose the operation\n");
    printf(" 0.Addition \n 1.Subtraction\n 2.Multiplication\n 3.Division");
    scanf("%d" ,&choice);
    if(choice>=0 && choice <4){
        res=op[choice](a,b);
        printf("The answer is %.2lf",res);
    }else{
        printf("Invalid choice\n");
    }
}