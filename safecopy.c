#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void safecopy(char* dest,const char* src,size_t size){
    if(size ==0) return;
    while(*src !='\0' && size>1){
        *dest=*src;
        dest++;
        src++;
        size--;
    }
    *dest='\0';
}
int main(){
    char src[]="Helloworld";
    char dest[6];
    safecopy(dest,src,sizeof(dest));
    printf("Copied string : %s",dest);
}