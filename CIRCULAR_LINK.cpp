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
node* del_first(node*);
node* del_last(node*);   
node* del_any(node*);   
node* ins_first(node*);
node* ins_before_node(node*);
node* ins_after_node(node*);
node *split(node *);

int main(){
    node *first;
    first=NULL;
    int ch=0;
    while(ch!=10){
		cout<<"\n 1.Create";
		cout<<"\n 2.view";
		cout<<"\n 3.del.first";
		cout<<"\n 4.del.last";
		cout<<"\n 5.del.any";
		cout<<"\n 6.insert.first";
		cout<<"\n 7.insert.before NOde";
		cout<<"\n 8.insert After NOde";
		cout<<"\n 9.Split";
		cout<<"\n 10.exit";
		cout<<"\n\n Enter your OPtion->";
		cin>>ch;
		
		switch(ch){
			case 1:first=create(first);  break;
			case 2:view(first);   break;
			case 3:first=del_first(first);   break;
			case 4:first=del_last(first);   break;
			case 5:first=del_any(first);   break;
			case 6:first=ins_first(first);   break;
			case 7:first=ins_before_node(first);   break;
			case 8:first=ins_after_node(first);    break;
			case 9:first=split(first);          break;
		   }
	}
	return 0;
}

node *create(node *first){
	if(first==NULL){
		first=(node*)malloc(sizeof(node));
		first->next=first;
		ptr=first;
	}
	else{
		ptr=first;
		while(ptr->next!=first){
			ptr=ptr->next;
		}
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=first;
	
		cout<<"Enter the Data->";
		cin>>ptr->data;
	
	return first;
}
void view(node* first){
	ptr=first;
	while(ptr->next!=first){
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}
	cout<<" "<<ptr->data;
}
node* del_first(node* first){
	ptr=first;
	while(ptr->next!=first){
		ptr=ptr->next;
	}
	ptr->next=first->next;
	first=first->next;
	cout<<"\n Delete Node oK..";
	return first;
}
node* del_last(node* first){
	ptr=first;
	while(ptr->next->next!=first){
		ptr=ptr->next;
	}
	ptr->next=first;
	ptr=ptr->next;
	return first;
}
node* del_any(node* first){
	int key;
	cout<<"\n Enter the KeyValue which U want to delete->";
	cin>>key;
	ptr=first;
	while(ptr->next->data!=key){
		ptr=ptr->next;
	}
	ptr->next=ptr->next->next;
	ptr=ptr->next; 
	return first;
}
node* ins_first(node* first){
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	cout<<"\n Enter the data for newnode->";
	cin>>newnode->data;
	ptr=first;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	newnode->next=first;
	ptr->next=newnode;
	first=newnode;
	
	return first;
}
node* ins_before_node(node* first){
	node *newnode;
	int key;
	newnode=(node*)malloc(sizeof(node));
	cout<<"\n Enter the data for newnode->";
	cin>>newnode->data;
	
	cout<<"\n Enter the Key Value whose before insert newnode->";
	cin>>key;
	ptr=first;
	while(ptr->next->data!=key){
    	ptr=ptr->next;
	}
	newnode->next=ptr->next;
    ptr->next=newnode;
    ptr=ptr->next;
	
	return first;
}
node* ins_after_node(node* first){
	int key;
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	cout<<"\n Enter the data for newnode->";
	cin>>newnode->data;
	
	cout<<"\n Enter the Key Value whose after insert newnode->";
	cin>>key;
	ptr=first;
	while(ptr->data!=key){
    	ptr=ptr->next;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
	ptr=ptr->next;
	
	return first;
}
node *split(node *first){
	node *p1,*p2,*p3;
	p1=p2=p3=first;
	if(!first)  return NULL;
	while(p1)
	{
		p3=p2;
		p2=p2->next;
		p1=p1->next;
		if(p1)
		  p1=p1->next;
	}
	p3->next=NULL;
	return p2;
}
