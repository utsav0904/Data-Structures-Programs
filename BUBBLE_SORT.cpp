#include<iostream>
using namespace std;
#define MAX 6

int main(){
	int i,a[MAX],j,temp,k;
	cout<<"\n enter the elements of array->";
	for(i=0;i<MAX;i++)
		cin>>a[i];
	cout<<"\n";
	for(i=0;i<MAX;i++)
		cout<<" "<<a[i];
	cout<<"\n **BUBBLE SORTING**";
	cout<<endl<<endl;
	
	for(i=0;i<MAX-1;i++){               //  n-1 times
		for(j=0;j<MAX-1-i;j++){         //  n-2 times for every ith pass.
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
					for(k=0;k<MAX;k++){
		              cout<<" "<<a[k];
	                }
	                cout<<"\n";
		    }
	    }
	cout<<"\n";
	}
	cout<<"\n";
	for(i=0;i<MAX;i++){
		cout<<" "<<a[i];
	}
	return 0;
}
