#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    char expr[MAX];
    char stack[MAX];
    int top=-1;
    printf("Enter expression: ");
    scanf("%s",expr);
    int bal=1;
    for(int i=0;i<strlen(expr);i++){
        char ch=expr[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            stack[++top]=ch;
        }
        else if(ch==')' || ch==']' || ch=='}'){
            if(top==-1){
                bal=0;
                break;
            }
            char temp=stack[top--];
            if((ch==')' && temp!='(')|| (ch==']' && temp!='[')|| (ch=='}' && temp!='{')){
                bal=0;
                break;
            }
        }
        
    }
    if(top!=-1) bal=0;
    if(bal) printf("balanced\n");
    else printf("Not balanced\n");
    return 0;
}