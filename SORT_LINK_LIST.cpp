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
node* create_second(node*);
void view_second(node*);
node* sorting(node*);
void count_nodes(node*);
node* reverse(node*);
void combine(node*,node*);

int main(){
	node *first;
	node *first1;
	first1=NULL;
	first=NULL;
	int ch=0;
	
	while(ch!=9){
		cout<<"\n 1.insertDaTa in first Link.";
		cout<<"\n 2.insertDaTa in second Link.";
		cout<<"\n 3.DisplayData of first link";
		cout<<"\n 4.DisplayData of second link";
		cout<<"\n 5.SORTING";
		cout<<"\n 6.CountNOdes";
		cout<<"\n 7.Reverse";
		cout<<"\n 8.Combine and view";
		cout<<"\n 9.exit";
		cout<<"\n\n enter ur option->";
		cin>>ch;
		switch(ch){
			case 1:first=create(first);          break;
			case 2:first1=create_second(first1); break;
			case 3:view(first);                  break;
			case 4:view_second(first1);          break;
			case 5:first=sorting(first);         break;
			case 6:count_nodes(first);           break;
			case 7:first=reverse(first);         break;
			case 8:combine(first,first1);        break;
		}
	}
	return 0;
}
node* create(node* first){
		if(first==NULL){
		first=(node*)malloc(sizeof(node));
		first->next=NULL;
		ptr=first;
	}
	else{
		ptr=first;
		while(ptr->next!=NULL){
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
node* create_second(node* first1){
		if(first1==NULL){
		first1=(node*)malloc(sizeof(node));
		first1->next=NULL;
		ptr=first1;
	}
	else{
		ptr=first1;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->next=NULL;
		cout<<"Enter the Data->";
		cin>>ptr->data;
	return first1;
}
void view(node* first){
	ptr=first;
	while(ptr!=NULL){
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}
}
void view_second(node* first1){
	ptr=first1;
	while(ptr!=NULL){
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}
}

node* sorting(node* first){
	int temp;
	node *count;
	ptr=first;
	while(ptr->next!=NULL){
		for(count=ptr->next;count!=NULL;count=count->next){
			if(ptr->data>count->data){
             	temp=ptr->data;
				ptr->data=count->data;
				count->data=temp; 
			}
			else
				continue;
		}     
		cout<<" "<<ptr->data;        		
	    ptr=ptr->next;
	}
	cout<<" "<<ptr->data;
	return first;
}
void count_nodes(node* first){
    int count=0;
    ptr=first;
    while(ptr!=NULL){
    	count++;
    	ptr=ptr->next;
	}
	cout<<"\n TOtal no of nodes is->"<<count;
}
node* reverse(node *first){
	node *t1,*t2,*prev;
	t1=first;
	prev=NULL;
	while(t1!=NULL){
		t2=t1->next;
		t1->next=prev;
		prev=t1;
		t1=t2;
	}
	first=prev;
	return first;
}
void combine(node *first1,node *first2){
    node *cur1,*cur2;
    cur1=first1;
    cur2=first2;
	if(first1==NULL){
		first1=first2;
	}
	else{
	   while(cur1!=NULL){
	   	cur1=cur1->next;
	   }
	   cur1->next=first2;
    } 
    while(first1!=NULL){
    	cout<<" "<<first1->data;
    	first1=first1->next;
	}
}

