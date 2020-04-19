#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
static int top=-1;

struct node{
	char ch;
    struct node *next;
    struct node *prev;
}*st[10];
typedef struct node node;

void push(node *t){
	top=top+1;
	st[top]=t;
}
node *pop(){
	node *y;
	y=st[top];
	top=top-1;
	return y;
}
void preorder(node *temp){
	if(temp!=NULL){
		preorder(temp->prev);
		cout<<temp->ch;
		preorder(temp->next);
	}
}

int main(){
	char postfix[30];
	node *opnd1,*opnd2,*t;
	int i;
	
	cout<<"\n Enter the postfix Notation->";
	gets(postfix);
	
	int l=strlen(postfix);
	cout<<"\n Length is->"<<l;
	cout<<endl;
    
	for(i=0;postfix[i]!='\0';i++){
		if((postfix[i] >= 'A' && postfix[i] <= 'Z') || (postfix[i] >= 'a' && postfix[i] <='z')){
		    t=(node*)malloc(sizeof(node));
			t->ch=postfix[i];
			t->next=NULL;
			t->prev=NULL;
			push(t);	
		}
		else if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='%'||postfix[i]=='^'){
			opnd1=pop();
			opnd2=pop();
			t=(node*)malloc(sizeof(node));
			t->ch=postfix[i];
			t->next=opnd1;
			t->prev=opnd2;
			push(t);
		}
	}
	cout<<endl<<endl;
    preorder(pop());
	return 0;
}
