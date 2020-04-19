#include<iostream>
using namespace std;
#define MAX 5

int main(){
	int i,a[MAX],j,temp,k;
	cout<<"\n enter the elements of array->";
	for(i=0;i<MAX;i++)
		cin>>a[i];
	cout<<"\n";
	for(i=0;i<MAX;i++)
		cout<<" "<<a[i]; 
	cout<<"\n **SELECTION SORTING**"<<endl<<endl;
	int min,loc,l;
	for(i=0;i<MAX;i++){   //   n-1 times
		min=a[i];            
		loc=i;
	    for(j=i;j<MAX;j++){  // n-1,n-2,n-3,n-4, times for each ith pass 
	    	if(min>a[j]){
	    		min=a[j];
	    		loc=j;
			}
		}
		for(k=loc;k>i;k--){
			a[k]=a[k-1];
		}
		a[i]=min;
		cout<<"\n";
                 for(l=0;l<MAX;l++){
                    cout<<" "<<a[l];
	             } 		
    }
    cout<<endl<<endl;
	return 0;
}
