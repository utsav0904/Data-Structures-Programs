#include<iostream>
using namespace std;
#include<stdlib.h>

void hanoi(int,int,int);
int main(){
	int n;
	cout<<"\n Enter The Value Of disks ->";
	cin>>n;
	hanoi(1,3,n);
	return 0;
}

void hanoi(int a,int c,int num){
	int b=num-a-c;
	if(num==1){
		cout<<"\n move disk 1 from "<<a<<" to "<<c;
	}
	else{
		hanoi(1,b,num-1);
		cout<<"\n move disk "<<num<<" from "<<a<<" to "<<c;
		hanoi(b,3,num-1);
	}
}
