#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* create(int val){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* insert(struct Node* root,int val){
    if(root==NULL){
        return create(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
int height(struct Node* root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    return 1+(leftht>rightht? leftht : rightht);
}
int isbalanced(struct Node* root){
    if(root==NULL){
        return 1;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    if(abs(leftht-rightht)>1){
        return 0;
    }
    return isbalanced(root->left) && isbalanced(root->right);
}
int main(){
    struct Node* root=NULL;
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,80);
    root=insert(root,100);
    root=insert(root,120);
    root=insert(root,10);
    printf("height of tree : %d\n",height(root));
    if(isbalanced(root)){
        printf("height is balanced.\n");
    }else{
        printf("Height is not balanced.\n");
    }
    return 0;
}