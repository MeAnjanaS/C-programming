#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void sortcity(char *cities[],int n){
    char *temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(cities[i],cities[j]>0){
                temp=cities[i];
                cities[i]=cities[j];
                cities[j]=temp;
            }
        }
    }
}
void freemem(char *cities[],int n){
    for(int i=0;i<n;i++){
        free(cities[i]);
    }
}
int main(){
    int n;
    printf("Enter no.of cities\n");
    scanf("%d", &n);
    char *cities[n];
    for(int i=0;i<n;i++){
        cities[i]=(char *)malloc(MAX*sizeof(char));
        printf("Enter city %d:",i+1);
    scanf(%s,cities[i]);
    }
    sortcity(cities,n);
    printf("Cities in alphabatical order\n");
    for(int i=0;i<n;i++){
        printf("%s\n",cities[i]);
    }
    freemem(cities,n);
    return 0;
}
