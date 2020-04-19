#include<iostream>
using namespace std;
#include<stdlib.h>

struct stack{
	int data;
	struct stack *next;
	struct stack *prev;
};
typedef struct stack node;
node *first=NULL;
void push();
void pop();
//void display();

int main(){
	int ch=0;
	while(ch!=4)
	{
		cout<<"\n 1.PushElements";
		cout<<"\n 2.DisplayElements";
		cout<<"\n 3.PopElements";
		cout<<"\n 4.exit";
		cout<<"\n\n Enter ur option->";
		cin>>ch;
		
		switch(ch)
		{
			case 1:push();    break;
		//	case 2:display();      break;
			case 3:pop();       break;
		}
	}	
	return 0;
}

void push(){
	node *cur;
	cur=first;
	int n;
	cout<<"\n Enter the number to push it->";
	cin>>n;
	if(cur==NULL){
		cur=(node*)malloc(sizeof(node));
		cur->data=n;
		cur->next=NULL;
		cur->prev=cur;
		first=cur;
		return;
	}
	if(cur!=NULL){
		while(cur->next!=NULL){
			cur=cur->next;
		}
		cur->next=(node*)malloc(sizeof(node));
		cur->next->data=n;
		cur->next->next=NULL;
		cur->next->prev=cur;
	}
}
void pop(){
	int n;
	if(first==NULL){
		return;
	}
	else{
		node *cur,*prev;
		cur=first;
		prev=NULL;
		
		while(cur->next!=NULL){
			prev=cur;
			cur=cur->next;
		}
		n=cur->data;
		
		if(prev==NULL){
			first=NULL;
		}
		else{
			prev->next=cur->next;
		}
		cout<<"\n poped value is->"<<n;
	}
}
/*void display()
{
	node *cur=first;
	while(cur!=NULL){
		cout<<" "<<cur->data;
	}
	cout<<" "<<cur->data;
}*/
