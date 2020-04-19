#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
static int top=-1;
struct node{
	char ch,ch2,ch3;
    struct node *next;
   // struct node *prev;
}st[10];
typedef struct node node;
void push(node *t){
	top=top+1;
	st[top]=t;
}
char pop(){
	char y;
	y=st[top];
	top=top-1;
	return y;
}
void show(node *temp){
	if(temp!=NULL){
		cout<<temp->ch3;
		cout<<temp->ch2;
		cout<<temp->ch;
	}
}

int main()
{
	char prefix[30];
	char opnd1,opnd2;
	node *t;
	int i,j,temp;
	
	cout<<"\n Enter the postfix Notation->";
	gets(prefix);
	
	int l=strlen(prefix);
	cout<<"\n Length is->"<<l;
	for(i=0,j=l-1;i<l/2;j--,i++)
    {
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
			push(t);
		}
		else if(prefix[i]=='+'||prefix[i]=='-'||prefix[i]=='*'||prefix[i]=='/'||prefix[i]=='%'||prefix[i]=='^')
		{
			opnd1=pop();
			opnd2=pop();
			t=(node*)malloc(sizeof(node));
			t->ch=prefix[i];
			t->ch2=opnd2;
			t->ch3=opnd1;
			t->next=NULL;
			push(t);
		}
		t=t->next;
	}
	cout<<endl<<endl;
    show(pop());
	return 0;
}
