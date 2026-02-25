#include<stdio.h>
#define N 5
int main(){
    int queue[N];
    int front =-1,rear=-1;
    int choice, val;
    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter value to enqueue:");
                scanf("%d",&val);
                if((front==0 && rear==N-1)||((rear+1)%N==front)){
                    printf("Queue overflow\n");
                }else{
                    if(front==-1) front=0;
                    rear=(rear+1)%N;
                    queue[rear]=val;
                    printf("%d enqueued\n",val);
                }
                break;
            case 2:
                if(front==-1){
                    printf("Queue underflow\n");
                }else{
                    printf("%d dequeued\n",queue[front]);
                    if(front==rear){
                        front=rear=-1;
                    }else{
                        front=(front+1)%N;
                    }
                }
                break;
            case 3:
                if(front==-1){
                    printf("Queue is empty\n");
                }else{
                    printf("queue elements:");
                    int i=front;
                    while(1){
                        printf("%d",queue[i]);
                        if(i==rear) break;
                        i=(i+1)%N;
                    }
                    printf("\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice\n");
        }
    }
}
