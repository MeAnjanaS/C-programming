#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* create(int val){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
};
struct Node* insert(struct Node* root,int val){
    if(root==NULL) 
    {
        return create(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
struct Node* findMin(struct Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
};
struct Node* delete(struct Node* root,int k){
    if(root==NULL){
        return root;
    }
    if(k<root->data){
        root->left=delete(root->left,k);
    }else if(k>root->data){
        root->right=delete(root->right,k);
    }else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            struct Node*temp=root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            struct Node* temp=root->left;
            free(root);
            return temp;
        }
        struct Node* temp=findMin(root->right);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);
    }
    return root;
}
void inorder(struct Node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main(){
    struct Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);
    printf("inorder befor deletion:");
    inorder(root);
    root=delete(root,50);
    printf("\nInorder after deletion");
    inorder(root);
    return 0;
}