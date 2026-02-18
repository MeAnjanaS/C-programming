#include<stdio.h>
#include<string.h>
union Data{
    int i;
    float f;
    char str[50];
};
struct Structdata{
    int i;
    float f;
    char str[50];
};
int main(){
    union Data u;
    struct Structdata s;
    printf("Size of Union %d\n",sizeof(u));
    printf("Size of Struct %d\n",sizeof(s));
    printf("Union details\n");
    u.i=10;
    printf("Integer :%d\n",u.i);
    u.f=2.567;
    printf("Float :%.2f\n",u.f);
    strcpy(u.str,"Hello from Union");
    printf("String :%s\n",u.str);
    printf("Struct Details\n");
    s.i=20;
    s.f=3.987;
    strcpy(s.str,"Hello from Struct");
    printf("Integer :%d\n",s.i);
    printf("Float :%.2f\n",s.f);
    printf("String :%s\n",s.str);
}