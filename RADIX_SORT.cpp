#include <iostream>
using namespace std;
#define Max 10

int main(){
	int a[Max],radix[Max][10],n,i;
	cout<<endl<<"enter the number of elements "<<endl;
	cin>>n;
	cout<<"enter elements->"<<endl;
	for(i=0;i<n;i++){	
		cin>>a[i];	
	}
	int max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	int count=0;
	while(max>0){
		count++;
		max=max/10;		
	}
	cout<<"\n counter is: "<<count;
	int m=10,j,k,g;
	for(j=0;j<count;j++,m=m*10){
	for(i=0;i<10;i++){		
		radix[0][i]=0;
	}
	for(i=0;i<n;i++){
		k=a[i]%m;
	    k=k*10/m;
		radix[0][k]++;
	    radix[radix[0][k]][k]=a[i];
	}
		k=0;
	for(i=0;i<10;i++){
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
    cout<<endl;
	}
}
