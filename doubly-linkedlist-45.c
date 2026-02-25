#include<stdio.h>
#include<stdlib.h>
struct Node{
    int seat;
    struct Node* prev;
    struct Node* next;
};
struct Node* head=NULL;
struct Node* create(int seat){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->seat=seat;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void addfront(int seat){
    struct Node* newNode=create(seat);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void addend(int seat){
    struct Node* newNode=create(seat);
    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}
void removepos(int pos){
    if(head==NULL) return;
    struct Node* temp=head;
    if(pos==1){
        head=temp->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        free(temp);
        return;
    }
    for(int i=1;i<pos && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Invalid position\n");
        return;
    }
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    if(temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    free(temp);
}
void displayforward(){
    struct Node* temp=head;
    printf("Forward:");
    while(temp!=NULL){
        printf("%d ",temp->seat);
        temp=temp->next;
    }
    printf("\n");
}
void displaybackward(){
    struct Node* temp=head;
    if(temp==NULL) return ;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("backward: ");
    while(temp!=NULL){
        printf("%d ",temp->seat);
        temp=temp->prev;
    }
    printf("\n");
}
int main(){
    addfront(50);
    addfront(60);
    addend(70);
    addend(90);
    displayforward();
    displaybackward();
    printf("Removing at position 2\n");
    removepos(2);
    displayforward();
    displaybackward();
    return 0;
    
}