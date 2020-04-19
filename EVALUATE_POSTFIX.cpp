#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
#include<math.h>

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
char TOP(char s[]){
	return s[top];
}
int main(){
	char  *e,st[30],postfix[30];
	int opnd1,opnd2;
	int i,j,val;
	
	cout<<"\n Enter the postfix Notation->";
	gets(postfix);
	
	int l=strlen(postfix);
	cout<<"\n Length is->"<<l;
	cout<<endl;  
	for(i=0;postfix[i]!='\0';i++){
		if(postfix[i] >='0' && postfix[i] <='9'){
			push(st,postfix[i]);
		}
		else if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='%'||postfix[i]=='^'){
			opnd2=pop(st);
			opnd1=pop(st);
			//value=Result(opnd1,opnd2,postfix[i]);
			switch(postfix[i]){
		    case '+':val=(opnd1+opnd2);   break;
		    case '-':val=(opnd1-opnd2);   break;
	        case '*':val=(opnd1*opnd2);   break;
	        case '%':val=(opnd1%opnd2);   break;
	        case '/':val=(opnd1/opnd2);   break;
	        }
			push(st,val);
		}
	}
    char value=TOP(st); 
    cout<<"\n VAlue is->"<<value-96;
	return 0;
}
