#include<iostream>
using namespace std;
#include<stdlib.h>

struct list{
	int data;
	struct list *next;
}*ptr;
typedef struct list node;
node* create(node*);
void view(node*);
node* findfrequency(node*);

int main()
{
	node *first;
	first=NULL;
	int ch=0;
	
	while(ch!=4)
	{
		cout<<"\n 1.insertDaTa";
		cout<<"\n 2.DisplayData";
		cout<<"\n 3.FINdfrequency";
		cout<<"\n 4.exit";
		cout<<"\n\n enter ur option->";
		cin>>ch;
		
		switch(ch)
		{
			case 1:first=create(first);          break;
			case 2:view(first);                  break;
			case 3:first=findfrequency(first);   break;
		}
	}
	return 0;
}
node* create(node* first)
{
		if(first==NULL)
	{
		first=(node*)malloc(sizeof(node));
		first->next=NULL;
		ptr=first;
	}
	else
	{
		ptr=first;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=NULL;
	
		cout<<"Enter the Data->";
		cin>>ptr->data;
	return first;
}
void view(node* first)
{
	ptr=first;
	while(ptr!=NULL)
	{
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}
}
node* findfrequency(node* first)
{
	int temp=0;
	node *count;
	node *freq=first;
	ptr=first;
	while(ptr!=NULL){
		temp=0;
		freq=first;
		for(count=freq->next;count!=NULL;count=count->next){
			if(ptr->data==count->data){
             	++temp; 
			}
			else{
				continue;
			}
		}
		cout<<"\n Frequency of "<<ptr->data<<" is->"<<temp;
		ptr=ptr->next;
	}
	return first;
}
