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
void show(node *temp){
	if(temp!=NULL){
		show(temp->prev);
		cout<<temp->ch;
		show(temp->next);
	}
}
int main(){
	char prefix[30];
	node *opnd1,*opnd2,*t;
	int i,j,temp;
	
	cout<<"\n Enter the prefix Notation->";
	gets(prefix);
	
	int l=strlen(prefix);
	cout<<"\n Length is->"<<l;
	for(i=0,j=l-1;i<l/2;j--,i++){
    	temp=prefix[i];
    	prefix[i]=prefix[j];
    	prefix[j]=temp;
	}
	cout<<endl;
	for(i=0;prefix[i]!='\0';i++)
	{
		if((prefix[i] >= 'A' && prefix[i] <= 'Z') || (prefix[i] >= 'a' && prefix[i] <='z'))
		{
			t=(node*)malloc(sizeof(node));
			t->ch=prefix[i];
			t->next=NULL;
			t->prev=NULL;
			push(t);
		}
		else if(prefix[i]=='+'||prefix[i]=='-'||prefix[i]=='*'||prefix[i]=='/'||prefix[i]=='%'||prefix[i]=='^')
		{
			opnd1=pop();
			opnd2=pop();
			t=(node*)malloc(sizeof(node));
			t->ch=prefix[i];
			t->next=opnd2;
			t->prev=opnd1;
			push(t);
		}
	}
	cout<<endl<<endl;
    show(pop());
	return 0;
}

