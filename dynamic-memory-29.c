#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Item{
    int id;
    char name[50];
    float price;
};
int main(){
    int n,i,count;
    printf("Enter no. of items\n");
    scanf("%d", &n);
    struct Item *items=(struct Item*)malloc(n*sizeof(struct Item));
    if(items==NULL){
        printf("Memory alloctaion failed\n");
        return 1;
    }
    count=0;
    for(i=0;i<n;i++) {
        printf("\nEnter details for Item %d\n", i + 1);
        printf("ID: ");
        scanf("%d",&items[i].id);
        printf("Name: ");
        scanf("%s",items[i].name);
        printf("Price: ");
        scanf("%f",&items[i].price);
        count++;
    }
    printf("\nItems List:\n");
    for(i=0;i<count;i++) {
        printf("%d %s %.2f\n",items[i].id,items[i].name,items[i].price);
   }
   int deleteId;
    printf("\nEnter ID to delete: ");
    scanf("%d",&deleteId);
    int found=0;
    for(i = 0;i<count;i++) {
        if(items[i].id==deleteId) {
            found=1;
            for(int j=i;j<count-1;j++) {
                items[j]=items[j+1];
            }
            count--;
            break;
        }
    }
    if(!found) {
        printf("Item not found!\n");
    }
    printf("\nAfter Deletion:\n");
    for(i=0;i<count;i++) {
        printf("%d %s %.2f\n",items[i].id,items[i].name,items[i].price);
    }
    free(items);
    return 0;
}