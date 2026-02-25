#include<stdio.h>
#define N 100
int st1[N], st2[N];
int top1=-1,top2=-1;
void enqueue(int x){
    if(top1==N-1){
        printf("queue overflow\n");
        return;
    }
    st1[++top1]=x;
    printf("%d enqueued\n",x);
}
void dequeue(){
    if(top1==-1 && top2 ==-1){
        printf("queue underflow\n");
        return;
    }
    if(top2==-1){
        while(top1!=-1){
            st2[++top2]=st1[top1--];
        }
    }
    printf("%d dequeued\n",st2[top2--]);
}
int main(){
    int choice,val;
    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter value: ");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                return 0;
            default:
                printf("invalid choice\n");
        }
    }
}