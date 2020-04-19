#include<iostream>
using namespace std;
#include<stdlib.h>

struct stacklist{
	int data;
	struct stacklist *next;
}*top=NULL;
typedef struct stacklist node;

void push();
void pop();
void display();

int main(){
	int ch=0;
	while(ch!=4){
		cout<<"\n 1.PushElements";
		cout<<"\n 2.DisplayElements";
		cout<<"\n 3.PopElements";
		cout<<"\n 4.exit";
		cout<<"\n\n Enter ur option->";
		cin>>ch;
		
		switch(ch){
			case 1:push();    break;
			case 2:display();      break;
			case 3:pop();       break;
		}
	}	
	return 0;
}
void push(){
	int val;
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	cout<<"\n Enter the value to push it in stack->";
	cin>>val;
	newnode->data=val;
	if(top==NULL){
		newnode->next=NULL;
	}
	else{
		newnode->next=top;
    }
    top=newnode;
}

void pop(){
	node *temp=top;
	if(temp==NULL){
		cout<<"\n Stack is UnderFlow.";
		return;
    }
    else{
    	cout<<"\n poped value is->"<<temp->data;
    	top=temp->next;
	}
}

void display(){
    node *temp=top;
    if(temp==NULL){
    	cout<<"\n Stack is Empty...";
	}
	else{
		while(temp->next!=NULL){
			cout<<" "<<temp->data;
			temp=temp->next;
		}
	}
	cout<<" "<<temp->data;
}
