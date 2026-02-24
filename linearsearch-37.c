#include<stdio.h>
int main(){
    int arr[100],n,target;
    int i,pos=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        printf("Element found at position %d\n",pos+1);
    }else{
        printf("Element not found\n");
    }
}