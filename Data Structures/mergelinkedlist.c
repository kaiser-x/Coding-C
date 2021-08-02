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

struct node* merge_2_linkedlist(struct node* head1,struct node* head2){
    printf("\n in before return");
	if(head1==NULL)return head2;
	if(head2==NULL)return head1;
	if(head1->data>head2->data){
	    printf("\ninswp");
		struct node* t=head1;
		head1=head2;
		head2=t;
	}
	printf("\n in megre");
	struct node* res=head1;
	while(head1!=NULL&&head2!=NULL){

		struct node* ptr=NULL;
		while(head1!=NULL&&head1->data<=head2->data){
			ptr=head1;
			printf("\n in inner loop");
			head1=head1->next;
		}
		ptr->next=head2;

		//swapp
		struct node* temp=head1;
		head1=head2;
		head2=temp;
	}
	printf("\n gonna return");
	return res;
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
	display(head);
		printf("\n");
	display(head1);
	struct node* res=NULL;
		res=merge_2_linkedlist(head,head1);
	display(res);
}

