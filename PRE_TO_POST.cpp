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
	int i,j,val,k=0;
	char arr[20];
	
	cout<<"\n Enter the prefix Notation->";
	gets(prefix);
	
	int l=strlen(prefix);
	cout<<"\n Length is->"<<l;
	cout<<endl;
  //  prefix[l]=')';
    //puts(prefix);
    
	for(i=l-1;i>-1;i--)
	{
		if(prefix[i]>='0' && prefix[i]<='9')
		{
			push(st,prefix[i]);
		}
		else if(prefix[i]=='+'||prefix[i]=='-'||prefix[i]=='*'||prefix[i]=='/'||prefix[i]=='%'||prefix[i]=='^'){
			opnd1=pop(st);
			opnd2=pop(st);
	        arr[k]=opnd1;
	        strcpy(arr[k],opnd1);
	        strcat(arr[k],prefix[i]);
	        strcat(arr[k],opnd2);
	        k++;
	        arr[k]=prefix[i];
	        k++;
	        arr[k]=opnd2;
	        k++;
		}
	}
	cout<<"\n hey\n\n";
	puts(arr);
	return 0;
}
