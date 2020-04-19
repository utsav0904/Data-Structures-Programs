#include<iostream>
using namespace std;

int main(){
	int i,j,k=6,N=10;
	int a[N],key[k],c[N];
	cout<<"\n Enter the Elements (1-5) Of Array->";
	for(i=0;i<N;i++){
		cin>>a[i];
	}
	for(i=1;i<k;i++){
		key[i]=0;
	}
	for(i=0;i<N;i++){
		key[a[i]]=key[a[i]]+1;
	}
	for(j=2;j<k;j++){
		key[j]=key[j]+key[j-1];
	}
	for(j=N-1;j>=0;j--){
		c[key[a[j]]-1]=a[j];
		key[a[j]]=key[a[j]]-1;
	}
	cout<<"\n";
	cout<<"\n **BUCKET SORT**"<<endl<<endl;
	for(i=0;i<N;i++){
		cout<<" "<<c[i];
	}
	return 0;
}
