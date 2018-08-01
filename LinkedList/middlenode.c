#include<stdio.h>
#include<stdlib.h>
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

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

int findmiddlenode(struct Node* head)
{
	struct Node *fastptr=head,*slowptr=head;
	while(fastptr&&fastptr->next)
	{
		fastptr=fastptr->next->next;
		slowptr=slowptr->next;
	}
	return slowptr->data;
}

int main()
{
	struct Node* head=NULL;
	push(&head, 10);
    push(&head, 30);
    push(&head, 40);
    push(&head, 60);
    push(&head, 90);
    printList(head);
    printf("%d",findmiddlenode(head));
	
}