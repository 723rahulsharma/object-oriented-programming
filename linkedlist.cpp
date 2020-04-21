#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void create()
{
	struct node *newnode,*current;
	char ch;
	do{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data part");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(start==NULL)
		{
			start=newnode;
			current =newnode;
		}
		else
		{
			current->next=newnode;
			current=newnode;
		}
		printf("enter your choice");
		cin>>ch;
	}
	while(ch!='n');
}
void Delete()
{
	struct node *ptr=start;
	while(start!=NULL)
	{
		start=start->next;
		ptr->next=NULL;
		free(ptr);
	}
}
int main()
{
 create();
 return 0;
}
