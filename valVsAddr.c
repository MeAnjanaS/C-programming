#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int *data;
    int size;
    int cap;
}Vector;
void init(Vector *v){
    v->size=0;
    v->cap=2;
    v->data=(int *)malloc(v->cap*sizeof(int));
}
void resize(Vector *v, int newcap){
    v->cap=newcap;
    v->data=(int *)realloc(v->data, v->cap*sizeof(int));
} 
void push(Vector *v,int val){
    if(v->size==v->cap){
        resize(v,v->cap*2);
    }
    v->data[v->size]=val;
    v->size++;
}
int pop(Vector *v){
    if(v->size==0){
        printf("Vector empty!\n");
        return -1;
    }
    v->size--;
    return v->data[v->size];
}
void freeVector(Vector *v){
    free(v->data);
}
void printvector(Vector *v){
    for(int i=0;i<v->size;i++){
        printf("%d ", v->data[i]);
    }
    printf("\n");
}
int main(){
    Vector v;
    init(&v);
    push(&v,10);
    push(&v,20);
    push(&v,30);
    push(&v,40);
    printf("Vector Elements: ");
    printvector(&v);
    printf("Popped elemnt : %d\n",pop(&v));
    printf("After pop:");
    printvector(&v);
    printf("Size = %d\n", v.size);
    printf("Capacity = %d\n", v.cap);
    freeVector(&v);
    return 0;
}