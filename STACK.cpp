#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 5

int top=-1,stack[MAX];

void push();
void display();
void pop();
void push();
void peep();

int main(){
	int ch=0;

	while(ch!=5){
		cout<<"\n 1.PushElements";
		cout<<"\n 2.DisplayElements";
		cout<<"\n 3.PopElements";
		cout<<"\n 4.Peep";
		cout<<"\n 5.exit";
		cout<<"\n\n Enter ur option->";
		cin>>ch;

		switch(ch){
			case 1:push();      break;
			case 2:display();   break;
			case 3:pop();       break;
			case 4:peep();      break;
		}
	}
	return 0;
}
void push(){
	int n;
	if(top==MAX-1){
		cout<<"\n Stack is OverFlow.";
	}
	else{
		cout<<"\n Enter the number to push it in Stack ->";
		cin>>n;
		stack[++top]=n;
		cout<<"\n Succesfully Pushed.";
	}
}
void display(){
	int i;
	if(top==-1){
		cout<<"\n Stack is Empty.";
	}
	else{
	for(i=top;i>=0;i--){
		cout<<" "<<stack[i];
	}
    }
}
void pop(){
	int n;
	if(top==-1){
		cout<<"\n Stack is Underflow";
	}
	else{
		n=stack[top--];
		cout<<"\n Succesfully POPED Element is->"<<n;
	}
}
void peep(){
	cout<<"\n Your Peeped Value is->"<<stack[top];
}
