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
	if((rear==MAX-1 && front==0 ) || front==rear+1){
		cout<<"\n Queue Is OverFlow";
	}
	else{
		if(rear==-1){
			front=rear=0;
		}
		else if(rear==MAX-1){
			rear=0;
		}
		else{
			rear=rear+1;
		}
		cout<<"\n Enter value to Insert it in queue->";
	    cin>>n;
		queue[rear]=n;
	}
}
void dequeue(){
	int n;
	if(front==-1){
		cout<<"\n Queue is UnderFlow.";
	}
	else{
		n=queue[front];
		if(front==rear){
			front=rear=-1;
		}
		else if(front==MAX-1){
			front=0;
		}
		else
		  front++;
	    cout<<"\n SuceesFully Deleted Element."<<n;
	}
}
void display(){
   int i;
   if(front==-1)
      cout<<"\n Queue is Empty...";
   else{
      if(front>rear){
      	for(i=rear;i<=front;i++){
      		cout<<" "<<queue[i];
		  }
	  }
	  else{
	  	for(i=front;i<=rear;i++){
	  		cout<<" "<<queue[i];
		  }
	  }
  }
}
