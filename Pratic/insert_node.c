#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

int addnode(struct node **head)
{
	struct node *new;
	new=malloc(sizeof(struct node));
	printf("Enter the newnode data:");
	scanf("%d",&new->data);
	if(*head==NULL)
	{
		new->link=*head;
		*head=new;
	}
	else
	{
		struct node *temp=*head;
		while(temp->link)
			temp=temp->link;
		new->link=temp->link;
		temp->link=new;
	}
}
void print(struct node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->link;
	}
}

void insert_node(struct node **head,int n)
{
	struct node *newnode=NULL,*temp=*head;
	int pos,x;
	newnode=malloc(sizeof(struct node));
	printf("Enter the new node data:");
	scanf("%d",&newnode->data);
	printf("Enter the x value: ");
	scanf("%d",&x);
	if(x==1)
	{
		newnode->link=*head;
		*head=newnode;
	}
	else
	{
		printf("Enter the pos value in which pos to insert node: ");
		scanf("%d",&pos);
		for(int i=1;i<pos-1;i++)
			temp=temp->link;
		if(n>=pos)
		{
		newnode->link=temp->link;
		temp->link=newnode;
		}
	}
}

int main()
{
	int i,n;
	printf("Enter number of nodes:");
	scanf("%d",&n);
	struct node *head=NULL;
	for(i=0;i<n;i++)
		addnode(&head);
	print(head);
	printf("\n");
	insert_node(&head,n);
	printf("\n");
	print(head);
	printf("\n");
}

