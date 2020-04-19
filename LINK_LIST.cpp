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
node* del_any(node*);   
node* ins_first(node*);
node* ins_before_node(node*);
node* ins_after_node(node*);

int main(){
    node *first;
    first=NULL;
    int ch=0;
    while(ch!=8)
	{
		cout<<"\n 1.Create";
		cout<<"\n 2.view";
		cout<<"\n 3.del.first";
		cout<<"\n 4.del.any";
		cout<<"\n 5.insert.first";
		cout<<"\n 6.insert.before NOde";
		cout<<"\n 7.insert After NOde";
		cout<<"\n 8.exit";
		cout<<"\n\n Enter your OPtion->";
		cin>>ch;
		
		switch(ch){
			case 1:first=create(first);  break;
			case 2:view(first);   break;
			case 3:first=del_first(first);   break;
			case 4:first=del_any(first);   break;
			case 5:first=ins_first(first);   break;
			case 6:first=ins_before_node(first);   break;
			case 7:first=ins_after_node(first);    break;
		   }
	}
	return 0;
}

node *create(node *first){
	if(first==NULL){
		first=(node*)malloc(sizeof(node));
		first->next=NULL;
		ptr=first;
	}
	else{
		ptr=first;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=NULL;
	
		cout<<"Enter the Data->";
		cin>>ptr->data;
		
	return first;
}
void view(node* first){
	ptr=first;
	while(ptr!=NULL){
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}
}
node* del_first(node* first){
	first=first->next;
	ptr=first;
		cout<<"\n Delete Node oK..";
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
	
	newnode->next=first;
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
