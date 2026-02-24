#include<stdio.h>
#define SIZE 9
int checkmat(int arr[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        int check[10]={0};
        for(int j=0;j<SIZE;j++){
            int num=arr[i][j];
            if(num<1 || num>9 || check[num]==1){
                return 0;
            }
            check[num]=1;
        }
    }
    for(int j=0;j<SIZE;j++){
        int check[10]={0};
        for(int i=0;i<SIZE;i++){
            int num=arr[i][j];
            if(num<1 || num>9 || check[num]==1){
                return 0;
            }
            check[num]=1;
        }
    }
    return 1;
}
int main(){
    int mat[SIZE][SIZE];
    printf("Enter matrix\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d" ,&mat[i][j]);
        }
    }
    if(checkmat(mat)){
        printf("Valid Matrix\n");
    }else{
        printf("Invalid Marix\n");
    }
    return 0;
}