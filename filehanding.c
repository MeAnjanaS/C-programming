#include<stdio.h>
#define MAX 1000
void bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main(){
    int count=0;
    FILE *fin,*fout;
    int arr[MAX];
    fin=fopen("input.txt","r");
    if(fin==NULL){
        printf("Error in opening file\n");
    }
    while(fscanf(fin,"%d",&arr[count])==1){
        count++;
    }
    fclose(fin);
    bubblesort(arr,count);
    fout=fopen("output.txt","w");
    if(fout==NULL){
        printf("Error opening output file\n");
    }
    for(int i=0;i<count;i++){
        fprintf(fout,"%d",arr[i]);
    }
    fclose(fout);
    printf("Sorting completed \n");
    return 0;
}