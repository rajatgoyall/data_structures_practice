#include<stdio.h>

struct Node 
{
	int data;
	struct Node* next;
};

void delete(struct Node** head_ref,int key)
{
	struct Node* temp=head_ref;
	struct Node* prev=Null;
	if(temp!=NULL&&temp->data==key)
	{
		*head_ref=temp->next;
		free(temp);
		return;
	}

	while(temp!=NULL&&temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}

	if(temp==NULL)
		return;

	prev->next=temp->next;
	free(temp);

}

void push(struct Node** head_ref,int new_data)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

void InsertAfter(struct Node* prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		printf("the previous Node cannot be NULL");
		return;
	}	

	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;

}

void append(int new_data)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	struct Node* temp=(*head_ref);
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	
	while(temp->next)
	{
		temp=temp->next;
	}
	temp->next=new_node;
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }



int main()
{
	struct Node* head=NULL;
	push(&head,5);
	append(3);
	append(7);
	InsertAfter(head->next,5);
	delete(7);


}