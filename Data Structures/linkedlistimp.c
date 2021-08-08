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

struct node* insert_at_begin(struct node *head,int x)
{	struct node* nn=newnode(x);
	/* data */
	if(head==NULL)
	 head=nn;
	else{
		nn->next=head;
		head=nn;
	}
	return head;
}

struct node* insert_at_pos(struct node* head,int x,int pos){
	struct node *nn=newnode(x);
	struct node *ptr=head;
	int i;
	for(i=0;i<pos-1;i++)
		ptr=ptr->next;
	nn->next=ptr->next;
	ptr->next=nn;
	return head;
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

struct node* delete_at_begin(struct node* head){

	struct node* delnode=head;

	if(head==NULL)
	
		printf("Nothing to delete");
	else{
			head=delnode->next;
			free(delnode);
			delnode=NULL;
	}
	return head;
}

struct node *delete_at_pos(struct node *head,int pos){
	struct node *delnode=NULL;
	struct node *ptr=head;
	if(head==NULL)
		printf("Nothing to print");
	else{
		int i;
		for(i=0;i<pos-1;i++)
			ptr=ptr->next;
		delnode=ptr->next;
		ptr->next=delnode->next;
		free(delnode);
		delnode=NULL;
	}
	return head;
}

struct node* delete_at_end(struct node* head){
	struct node *delnode=NULL;
	struct node *ptr=head;
	if(head==NULL)
		printf("Nothig to delete");
	else{
		while(ptr->next->next!=NULL)
			ptr=ptr->next;
		delnode=ptr->next;
		ptr->next=NULL;
		free(delnode);
		delnode=NULL;
	}
	return head;
}


//with 2 pointers and head
struct node* rev(struct node* head){
	if(head==NULL){
		printf("nothing to rev");
	}
	else{
		struct node *ptr=NULL;
		struct node *nxt=NULL;
		while (head!=NULL)
		{
			nxt=head->next;
			head->next=ptr;
			ptr=head;
			head=nxt;

		}
		return ptr;
		
	}

}
//detect a loop
void detectLopp(struct node *head){
	if(head==NULL)
	printf("Nothing to detect");
	else{int f=1;
		struct node *slow=head;
		struct node *fast=head;
		while(fast!=NULL&&fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast){
				f=0;
				break;
			}
		}
		if(f==0)
		printf("\nloop is there");
		else
		printf("\n no loop sed lyf bruh");
	}
}

int loopLength(struct node *head){
	if(head==NULL)
	printf("Nothing to detect");
	else{int f=1;
		struct node *slow=head;
		struct node *fast=head;
		while(fast!=NULL&&fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast){
				struct node *ptr=slow;
				int count=1;
				while(ptr->next!=slow){
					count++;
					ptr=ptr->next;
				}
				return count;
			}
		}
		return -1;
		
	}
}

//starting node of a loop
struct node* loop_first_node(struct node* head){
	if(head==NULL)
	printf("Nothing to detect");
	else{int f=1;
		struct node *slow=head;
		struct node *fast=head;
		struct node *entry=head;
		while(fast!=NULL&&fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast){
				while(entry!=slow){
					entry=entry->next;
					slow=slow->next;
				}
				return entry;
				
			}
		}
		return NULL;
		
	}
}


//with 3 pointers
struct node* Reverse(struct node* head)
{
    struct node *prev,*current,*next_node;
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        next_node=current->next;  // storing the next address in next_node
        current->next=prev;  // linking the current to previous node
        prev=current;  // updating prev pointer
        current=next_node;  // updating current pointer
    }
    head =prev; // sice prev points to last node, we point head to this node as last step
    return head;
}

//merger 2 sorted linkedlist
struct node* merge_2_linkedlist(struct node* head1,struct node* head2){
    printf("\n in before return");
	if(head1==NULL)return head2;
	if(head2==NULL)return head1;
	if(head1->data>head2->data){
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
			head1=head1->next;
		}
		ptr->next=head2;
		//swapp
		struct node* temp=head1;
		head1=head2;
		head2=temp;
	}
	return res;
}
struct node* remove_nth_last_node(struct node*head,int n){
	if(head==NULL)
	 return NULL;
	 else{
		 struct node* slow=head;
		 struct node* fast=head;
		 struct node *delnode=NULL;
		 while(n>0)
		 {
			 fast=fast->next;n--;
		 }
		 if(fast==NULL)
		 return head->next;
		 while(fast!=NULL&&fast->next!=NULL){
			 slow=slow->next;
			 fast=fast->next;
		 }
		 delnode=slow->next;
		 slow->next=delnode->next;
		 free(delnode);
		 delnode=NULL;

	 }
	 return head;
}
void display(struct node *head){
	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

int main(){
struct node* head=NULL;
struct node* head1=NULL;
	int n;
	scanf("%d",&n);
	int arr[n],i,brr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
// 		head=insert_at_begin(head,arr[i]);
		head=insert_at_end(head,arr[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&brr[i]);
		head1=insert_at_end(head1,brr[i]);
	}
// 	head=insert_at_pos(head,56,4);
	// head=delete_at_begin(head);
	// head=delete_at_end(head);
	// head=delete_at_pos(head,2);
	display(head);
		printf("\n");
	display(head1);
// 	head=Reverse(head);
	printf("\n");
	display(head);
	// head->next->next->next->next->next=head->next->next;
// 	detectLopp(head);
// 	printf("\nloos is of %d node  ",loopLength(head));
// 	struct node* first=loop_first_node(head);
// 	printf("\n first node is:%d ",first->data);
	head=merge_2_linkedlist(head,head1);
	display(head);
	head=remove_nth_last_node(head,4);
	display(head);
}


