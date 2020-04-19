#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 5

struct queue{
	int data[MAX],front,rear;
}*p;
typedef struct queue node;

node *insert(node*);
node *del(node*);
void display(node*);



int main()
{
	int ch=0;
	p=(node*)malloc(sizeof(node));
	p->front=-1;
	p->rear=-1;
     while(ch!=4)
     {
     	 cout<<"\n 1.insert";
     	 cout<<"\n 2.delelte";
     	 cout<<"\n 3.isplay";
     	 cout<<"\n 4.Exit";
     	 cout<<"\n\n Enter ur option->";
     	 cin>>ch;
     	 
         switch(ch)
           {
              case 1:p=insert(p);   break;
              case 2:p=del(p);    break;
              case 3:display(p); break;
           }
    }
	return 0;
}
node* insert(node *p)
{
	int n;
	if(p->rear==MAX-1)
	{
		cout<<"\n Queue is OverFlow.";
	}
	else{
		cout<<"\n enter num. to insert->";
		cin>>n;
		p->rear++;
		p->data[p->rear]==n;
	}
	return p;
}
node *del(node *p)
{
	int n;
	if(p->front==p->rear)
	{
		cout<<"\n Queue is UnderFlow.";
	}
	else{
		p->front++;
		n=p->data[p->front];
		cout<<"\n Succes fully delete.."<<n;
	}
	return p;
}
void display(node *p)
{
	int i;
	for(i=(p->front)+1;i<=p->rear;i++)
	{
		cout<<" "<<p->data[i];
	}
}
