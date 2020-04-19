#include<iostream>
using namespace std;
#define MAX 5
static int front=-1,rear=-1;
int queue[MAX];

void enqueue();
void dequeue();
void display();

int main()
{
	int ch=0;
	while(ch!=4){
		cout<<"\n 1.InsertElements";
		cout<<"\n 2.DeleteElements";
		cout<<"\n 3.DisplayElements";
		cout<<"\n 4.Exit";
		cout<<"\n\n Enter ur Option->";
		cin>>ch;
		
		switch(ch){
			case 1:enqueue();   break;
			case 2:dequeue();   break;
			case 3:display();   break;
		}
	}
	return 0;
}
void enqueue(){
	int n;
	if(rear==MAX-1){
		cout<<"\n Queue Is OverFlow";
	}
	else{
		cout<<"\n Enter value to Insert it in queue->";
	    cin>>n;
		rear++;
		queue[rear]=n;
	}
}
void dequeue(){
	int n,i,j,temp;
	if(front==rear){
		cout<<"\n Queue is UnderFlow.";
	}
	else{
		   front++;
	       n=queue[front];
	       cout<<"\n SuceesFully Deleted Element.";
	}
}
void display(){
	int i,f=front;
    if(front!=rear)
	{
       for(i=front+1;i<=rear;i++){
   	         cout<<" "<<queue[i];
       }
    }
    else{
    	cout<<"\n Queue is Empty..";
	}
}
