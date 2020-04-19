#include<iostream>
using namespace std;
#define MAX 10

int main(){
	int a[MAX],radix[MAX+1][MAX],i,j,k,temp,g,n;
	cout<<"\n Enter key the number of tot.Bucket->";
	cin>>n;
	cout<<"\n";
	cout<<"\n Enter the elements of array(between 0 to Key only)->";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	for(i=0;i<n;i++){
		radix[0][i]=0;
	}
	for(i=0;i<n;i++){
		k=a[i];
		radix[0][k]++;
		radix[radix[0][k]][k]=a[i];
	}
	k=0;
	for(i=0;i<n;i++){
		g=1;
		while(radix[0][i]>0){
			a[k++]=radix[g++][i];
			radix[0][i]--;
		}
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	return 0;
}
