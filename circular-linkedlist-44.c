#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char song[50];
    struct Node* next;
};
struct Node* head=NULL;
void addsong(char name[]){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->song,name);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }
    struct Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void removesong(char name[]){
    if(head==NULL) return;
    struct Node* temp=head;
    struct Node* prev=NULL;
    if(strcmp(head->song,name)==0){
        if(head->next==head){      //only one node
            free(head);
            head=NULL;
            return;
        }
        while(temp->next!=head){    //find last node
            temp=temp->next;
        }
            struct Node* deletenode=head;
            head=head->next;
            temp->next=head;
            free(deletenode);
            return;
    }
        prev=head;
        temp=head->next;
        while(temp!=head && strcmp(temp->song,name)!=0){
            prev=temp;
            temp=temp->next;
        }
        if(temp==head){
            printf("Song not found \n");
            return;
        }
        prev->next=temp->next;
        free(temp);
}
void playsong(int k){
    if(head==NULL) return;
    struct Node* temp=head;
    int count=0;
    while(count<k){
        printf("%s\n",temp->song);
        temp=temp->next;
        count++;
    }
}
int main(){
    addsong("song A");
    addsong("song B");
    addsong("song C");
    addsong("song D");
    addsong("song E");
    printf("Playing playlist for 8 songs:\n");
    playsong(8);
    printf("\nRemoving Song C...\n");
    removesong("song C");
    printf("\nPlaying again for 8 songs:\n");
    playsong(8);
    return 0;
}