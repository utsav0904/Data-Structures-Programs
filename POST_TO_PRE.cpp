#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

static int top=-1,t=-1;
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
	return s[t];
}
int gettop(){
	return top;
}

int main()
{
	char st[30],prefix[30];
	char opnd1,opnd2;
	int i,j,val;
	char arr[20];
	
	cout<<"\n Enter the prefix Notation->";
	gets(prefix);
	
	int l=strlen(prefix);
	cout<<"\n Length is->"<<l;
	cout<<endl;
  //  prefix[l]=')';
    //puts(prefix);
    
	for(i=0;prefix[i]!='\0';i++)
	{
		if(prefix[i] >='0' && prefix[i] <='9')
		{
			push(st,prefix[i]);
		}
		else if(prefix[i]=='+'||prefix[i]=='-'||prefix[i]=='*'||prefix[i]=='/'||prefix[i]=='%'||prefix[i]=='^')
		{
			opnd1=pop(st);
			opnd2=pop(st);
	        arr[k]=prefix[i];
	        k++;
	      // push(st,arr[k]);
	        arr[k]=opnd1;
	        k++;
	     //  push(st,arr[k]);
	        arr[k]=opnd2;
	        k++;
		//	push(st,arr[k]);
		}
	}
	arr[k+1]='\0';
	cout<<"\n hey\n\n";
	puts(arr);
	return 0;
}
