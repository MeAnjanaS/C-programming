#include <stdio.h>
#include<string.h>
int findsubstr(char str[],char target[]){
    int n=strlen(str);
    int m=strlen(target);
    for(int i=0;i<=n-m;i++){
        int j;
        for( j=0;j<m;j++){
            if(str[i+j]!=target[j]){
               break;
            }
        }
        if(j==m) return i;
    }
    return -1;
}
int main() {
    char str[]="hello World world";
    char target[]="world";
    int idx=findsubstr(str,target);
    if(idx!=-1){
        printf("Found at index %d",idx);
    }else{
        printf("Not found");
    }

}
