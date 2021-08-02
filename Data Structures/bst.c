#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;

    struct node* right;
};

struct node* newnode(int x){
   struct node* nn=(struct node*)malloc(sizeof(struct node));

   nn->data=x;
   nn->left=nn->right=NULL;
   return nn;

}

struct node* insert(struct node* root,int x){
    
    struct node* nn=newnode(x);
    
    if(root==NULL){
        root=nn;
    }
   else{
       struct node* temp=root;
       if(x<temp->data)
            temp->left=insert(temp->left,x);
    else if(x>temp->data)
            temp->right=insert(temp->right,x);
   }
   return root;
}
int height(struct node* root){
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    if(rh>lh)
        return rh+1;
    else
        return lh+1;
}


void levelorder(struct node* root,int level){
    if(root==NULL)
    return;
    if(level==0)
        printf("%d ",root->data);
        if(level>0){
    levelorder(root->left,level-1);
    levelorder(root->right,level-1);
    // printf("\n");
    }
}

int parent(struct node* root,struct node* par,int ele){
    if(root->data==ele){
        return par->data;
    }
    else if(ele>root->data){
        return parent(root->right,root,ele);
    }
    else if(ele<root->data){
        return parent(root->left,root,ele);
    }
    return -1;
}
void callevelorder(struct node* root){

int h=height(root);

int i;

for(i=0;i<h;i++){
    levelorder(root,i);
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    struct node* root=NULL;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        root=insert(root,arr[i]);
    }
    // inorder(root);
    callevelorder(root);
    printf("%d",parent(root,root,11));

}