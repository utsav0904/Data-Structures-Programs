#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5

int main(){
	int a[MAX],i,n;
	int first,last,mid;
	first=0;
	last=MAX-1;
	mid=(first+last)/2;
	
	cout<<"\n Enter the Elements of array->";
	for(i=0;i<MAX;i++){
		cin>>a[i];
	}
	cout<<"\n";
	for(i=0;i<MAX;i++){
		cout<<" "<<a[i];
	}
	cout<<"\n\n BINARY SERCH PROCRESS"<<endl;
	cout<<"\n Enter the Number to find->";
	cin>>n;
	
	while(last>first){
		if(n<a[mid]){
		   last=mid;
		   mid=(first+last)/2;
		}
		else if(n>a[mid]){
			first=mid;
			mid=(first+last)/2;
		}
		else{
			cout<<"\n Number ("<<n<<") found at position->"<<mid;
			break;
		}
	}
	return 0;
}
