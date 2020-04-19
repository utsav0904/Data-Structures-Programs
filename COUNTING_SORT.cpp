#include<iostream>
using namespace std;


int main(){
 	int i,j,k,N;
	int a[15],b[10],c[15];
	N=15; k=10;
	
	cout<<"\n Enter the Elements oF Array a (between 0 to 9 ONLY.)->";
	for(i=0;i<N;i++){
    	cin>>a[i];
	}
	cout<<"\n";
	for(i=0;i<N;i++){
    	cout<<" "<<a[i];
	}
		for(i=0;i<k;i++){
			b[i]=0;
		}
			for(i=0;i<N;i++){
				b[a[i]]=b[a[i]]+1;
			}
			cout<<"\n\n";
				for(i=0;i<k;i++){
					cout<<" "<<b[i];
				}
					for(i=1;i<k;i++){
						b[i]=b[i]+b[i-1];
					}
					cout<<"\n\n";
						for(i=0;i<k;i++){
							cout<<" "<<b[i];
						}
							for(j=N-1;j>=0;j--){
								c[b[a[j]]-1]=a[j];
								b[a[j]]=b[a[j]]-1;
							}
	cout<<"\n **COUNTING SORT**"<<endl<<endl;
	for(i=0;i<N;i++){
		cout<<" "<<c[i];
	}
	return 0;
}
