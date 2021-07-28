#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node *newnode(int x){
	struct  node* nn=(struct node*)malloc(sizeof(struct node));
	nn->data=x;
	nn->next=NULL;
	return nn;
}

struct node *insert_at_end(struct node* head,int x)
{
	struct node *nn=newnode(x);
	if(head==NULL)
		head=nn;
	else{
		struct node* ptr=head;
		while (ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=nn;
		
	}
	return head;
}

void display(struct node *head){
	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

struct node* addlinkedlistt(struct node* head1,struct node* head2){
    printf("\nin func");
    struct node* ptr=newnode(-1);
    struct node* temp=ptr;
    int sum=0,carry=0;
    while(head1!=NULL||head2!=NULL||carry){
		sum=0;
        if(head1!=NULL){
            sum=sum+head1->data;
            head1=head1->next;
        }
        if(head2!=NULL){
            sum=sum+head2->data;
            head2=head2->next;
        }
        sum=sum+carry;
        carry=sum/10;
        struct node* nn=newnode(sum%10);
        temp->next=nn;
        temp=temp->next;
    }
    return ptr->next;
}
int main(){
struct node* head=NULL;
struct node* head1=NULL;
	int n,m;
	scanf("%d",&n);
	int arr[n],i,brr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		head=insert_at_end(head,arr[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&brr[i]);
		head1=insert_at_end(head1,brr[i]);
	}
// 	display(head);
// 		printf("\n");
// 	display(head1);
	struct node* res=NULL;
		res=addlinkedlistt(head,head1);
	display(res);
}

