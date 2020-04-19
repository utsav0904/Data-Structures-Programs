#include<stdio.h>
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
char get_top(char s[]){
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
//	static int top=-1;
	int i,j,temp,k=0;
	char st[30],Q[30];
	char x[30];
    printf("\n Enter the infix Form : ");
    gets(Q);
    
    int l=strlen(Q);
    for(i=0,j=l-1;i<l/2;j--,i++){
    	temp=Q[i];
    	Q[i]=Q[j];
    	Q[j]=temp;
	}
    printf("\n REVERSE INFIX NOTATION IS-> %s",Q);
    
    printf("\n");
	
	for(i=0;Q[i]!='\0';i++){
		if(Q[i]=='('){
			Q[i]=')';
		}
		else{
		   if(Q[i]==')'){
		   	Q[i]='(';
		   }
		}
	}
     printf("\n REVERSE INFIX NOTATION IS-> %s",Q);
    
printf("\n\n");    
     for(i=0;Q[i]!=NULL;i++){
      	if(Q[i]=='('){
      		push(st,Q[i]);
		  }
		  else{
		     if(Q[i]==')'){
		     	while((x[k]=pop(st))!='(')
                     printf("%c",x[k]);
                     k++;
			 }
			 else{
			 	while(priority(Q[i])<=priority(get_top(st)) && !null(st))		 	{
			 		 x[k]=pop(st);
                     printf("%c",x[k]);
                     k++;
				 }
				 push(st,Q[i]);
			 }
		  }
	 }
	while(!null(st)){
    x[k]=pop(st);
    printf("%c",x[k]);
    k++;
    } 
    printf("\n");
    
    for(i=0;i<k;i++){
    	printf("%c",x[i]);
	}
	printf("\n\n\n ");
	int l1=strlen(x);
    for(i=0,j=l1-1;i<l1/2;j--,i++){
    	temp=x[i];
    	x[i]=x[j];
    	x[j]=temp;
	}
    printf("\n REVERSE PREFIX NOTATION IS-> %s",x);
	
	return 0;
}
