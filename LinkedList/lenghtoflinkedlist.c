#include<stdio.h>

struct Node
{
	int data;
	stryct Node* next;
};
void push(struct Node** head_ref,int new_data)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

int lenght(struct Node* head)
{
	int count=0;
	struct node*temp=(struct Node*)malloc(sizeof(struct Node));
	temp=head;
	while(temp)
	{
		count++;
		temp=temp->next;
	}
	return count;

}

int main()
{
	struct Node* head=NULL;
	push(&head,1);
	push(&head,1);
	push(&head,1);
	push(&head,1);
	lenght(head);
}