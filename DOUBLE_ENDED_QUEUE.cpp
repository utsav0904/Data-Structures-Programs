#include<iostream>
using namespace std;
#define MAX 5
int front=-1,rear=-1,n,que[MAX];

void enqueue_rear(){
	if(rear==MAX-1)
		cout<<"\n Queue is Overflow";
	else{
		if(rear==-1)
			rear=0;
		else
			rear++;
        cout<<"\n Enter Elements insert at REAR_END->";
        cin>>n;
        que[rear]=n;
	}
}
void enqueue_front(){
	if(front<=-1)
		cout<<"\n u Can't add Element..";
	else{
		cout<<"\n Enter Elements insert at FRONT_END->";
        cin>>n;
		que[front--]=n;
	}
}
void dequeue_front(){
	if(front==rear)
		cout<<"\n Queue is UnderFlow.";
	else{
		if(front==rear){
			front=0;
			rear=0;
		}
		else
			front++;
		 n=que[front];
		cout<<"\n Number Deleted is->"<<n;
	}
}
void dequeue_rear(){
	if(rear<=-1)
		cout<<"\n u Can't delete elements from rear.";
	else{
		n=que[rear];
		if(front==rear){
			front=0;
			rear=0;
		}
		else
			--rear;
		cout<<"\n delete number is->"<<n;
	}
}
void display(){
	int i;
	for(i=front+1;i<=rear;i++){
		cout<<" "<<que[i];
	}
}
int main(){
	int ch=0;
	while(ch!=6){
		cout<<"\n 1.InsertElements at Rear-End";
		cout<<"\n 2.InsertElements at Front-End";
		cout<<"\n 3.DeleteElements at Front-End";
		cout<<"\n 4.DeleteElements at Rear-End";
		cout<<"\n 5.displayElements";
		cout<<"\n 6.Exit";
		cout<<"\n\n Enter ur Option->";
		cin>>ch;
		
		switch(ch){
			case 1:enqueue_rear();   break;
            case 2:enqueue_front();  break;
            case 3:dequeue_front();   break;
			case 4:dequeue_rear();   break;
			case 5:display();   break;
		}
	}
	return 0;
}
