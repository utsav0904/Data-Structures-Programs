#include<iostream>
using namespace std;
#define MAX 10
int main(){
	int i,a[MAX],j,temp,k;
	cout<<"\n enter the elements of array->";
	for(i=0;i<MAX;i++)
		cin>>a[i];
	cout<<"\n";
	for(i=0;i<MAX;i++)
		cout<<" "<<a[i];
	cout<<"\n **INSERTION SORTING**";
	cout<<endl<<endl;
	
	for(i=0;i<MAX;i++){
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--){
			a[j+1]=a[j];
		}
		a[j+1]=temp;
		for(k=0;k<MAX;k++){
		cout<<" "<<a[k];
     	}
     	cout<<"\n";
	}
	cout<<endl<<endl;
	for(i=0;i<MAX;i++){
		cout<<" "<<a[i];
        }
	return 0;
}
