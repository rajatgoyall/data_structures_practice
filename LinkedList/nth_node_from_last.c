#include<stdio.h>

struct Node 
{
	int data;
	struct Node* next;
};

void push(struct Node** head_ref,int new_data)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

int getnthfromlast(struct Node* head,int index)
{
	int len=0,i;
	struct Node* temp=head;
	while(temp)
	{
		temp=temp->next;
		len++;
	}

	if(len<n)
		return;
	temp=head;
	for (i = 1; i < len-n+1; i++)
    temp = temp->next;
 
    printf ("%d", temp->data);
 
    return;
}


int main()
{
	struct Node* head=NULL;
	push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
}