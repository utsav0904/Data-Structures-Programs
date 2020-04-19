#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

static int top=-1;
void push(char s[],char p){
	top=top+1;
	s[top]=p;
}
char pop(char s[]){
	char y;
	y=s[top];
	top=top-1;
	return y;
}
char Top(char s[]){
	return s[top];
}
int null(char s[]){
	if(top==-1)
          return(1);
    else
          return(0);
}
int priority(char x){
   if(x == '(')
         return(0);
   if(x == '+' || x == '-')
         return(1);
   if(x == '*' || x == '/' || x == '%')
         return(2);
   return(3);
}

int main(){
	static int k=0;
	int i;
	char stack[30],infix[30],postfix[30];

	cout<<"\n Enter the Infix Notation ->";
    cin>>infix;

	for(i=0;infix[i]!=NULL;i++){
		if(infix[i] == '('){
			push(stack,infix[i]);
		}
		else{
			if(infix[i]==')'){
				while(postfix[k]=pop(stack)!='('){
					cout<<""<<postfix[k];
					k++;
				}
			}
			else{
				while(priority(infix[i])<=priority(Top(stack)) && !null(stack)){
					postfix[k]=pop(stack);
					cout<<""<<postfix[k];
					k++;
				}
				push(stack,infix[i]);
			}

		}
	}
	for(i=0;infix[i]!=NULL;i++){
		while(!null(stack)){
			postfix[k]=pop(stack);
			cout<<""<<postfix[k];
		}
	}
	return 0;
}
