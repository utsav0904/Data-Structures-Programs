#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

struct pretopost{
	int top;
	char arr[30];
};
typedef struct pretopost node;
void pre_to_post(char[],char[]);
void push(node*s,char);
char pop(node*);

int main(){
	char str[30],rstr[30],temp[30];
	int i,z;
	cout<<"\n Enter the Prefix Notation->";
	gets(str);
	for(i=0;str[i]!='\0';i++){
		temp[i]=str[i];
	}
	puts(str);
	pre_to_post(temp,rstr);
	cout<<"\n\n";
	puts(rstr);
	return 0;
}

void push(node* s,char ch)
{
	s->top=s->top+1;
	s->arr[s->top]=ch;
}
char pop(node *s)
{
	return (s->arr[(s->top)--]);
}
void pre_to_post(char instr[],char outstr[]){
	int i,j,ct=1,z=0;
	char ch,opnd1,opnd2;
	node stk;
	stk.top=-1;
	
	for(i=0;instr[i]!='\0';i++){
		ch=instr[i];
	   if((instr[i] >= 'A' && instr[i] <= 'Z') || (instr[i] >= 'a' && instr[i] <='z')){
			push(&stk,instr[i]);
		}
		else if(instr[i]=='+' || instr[i]=='-' || instr[i]=='*' || instr[i]=='/' || instr[i]=='%' || instr[i]=='^'){
			opnd1=pop(&stk);
			opnd2=pop(&stk);
			outstr[z++]=opnd1;
			outstr[z++]=opnd2;
			outstr[z++]=instr[i];
		}
		cout<<""<<outstr;
	/*	if(ct==1){
			opnd1=pop(&stk);
			opnd2=pop(&stk);
			outstr[z++]=opnd1;
			outstr[z++]=opnd2;
			outstr[z++]=ch;
			ct++;
		}
		else{
			opnd2=pop(&stk);
			outstr[z++]=opnd2;
			outstr[z++]=ch;
		}
	}*/
	outstr[z]='\0';
}
}
