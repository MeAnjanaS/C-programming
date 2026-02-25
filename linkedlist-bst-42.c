#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node * create(int val){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL; 
}
struct Node* insert(struct Node* root,int val){
    if(root==NULL){
        return create(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
int search(struct Node *root, int k){
    if(root==NULL) return 0;
    if(root->data==k){
        return 1;
    }else if(k<root->data){
        return search(root->left,k);
    }else{
        return search(root->right,k);
    }
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
    int choice,val;
    while(1){
        printf("n1.Insert\n2.Search\n3.Inorder\n4.Exit\n");
        printf("enter choice :\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter value :");
                scanf("%d",&val);
                root=insert(root,val);
                break;
            case 2:
                printf("enter value to be searched :\n");
                scanf("%d",&val);
                if(search(root,val)){
                    printf("value found.\n");
                }else{
                    printf("value not found.\n");
                }
                break;
            case 3:
                printf("inorder travrsal:");
                inorder(root);
                printf("\n");
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice\n");
        }
    }
}