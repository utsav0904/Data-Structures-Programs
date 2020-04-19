#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 3


int main(){
	int a[MAX],b[MAX],c[MAX],i,j;
	for(i=0;i<MAX;i++){
		cout<<"\n Enter the coefficient for a:";
		cin>>a[i];
	}
	for(i=0;i<MAX;i++){
		cout<<a[i]<<"x^"<<i;
		if(i<MAX-1){
			cout<<"+";
		}
    }
		for(i=0;i<MAX;i++){
			cout<<"\n ENter the coefficient for b:";
			cin>>b[i];
		}
		for(i=0;i<MAX;i++){
			cout<<b[i]<<"x^"<<i;
			if(i<MAX-1){
				cout<<"+";
			}
		}
		for(i=0;i<MAX;i++){
			c[i]=a[i]+b[i];
		}
		cout<<"\n ADDITION OF TWO POLYNOMIALS IS..";
		for(i=0;i<MAX;i++){
			cout<<c[i]<<"x^"<<i;
			if(i<MAX-1){
				cout<<"+";
			}
		}
		for(i=0;i<MAX;i++){
			c[i]=a[i]-b[i];
		}
		cout<<"\n SUBTRACTION OF TWO POLYNOMIALS IS..";
		for(i=0;i<MAX;i++){
			cout<<c[i]<<"x^"<<i;
			if(i<MAX-1){
				cout<<"+";
			}
		}
		int l=0;
		cout<<"\n MULTIPLICATION OF TWO POLYNOMIALS IS..";
		for(i=0;i<MAX;i++){
			for(j=0;j<MAX;j++){
				c[i]=a[i]*b[i];
				cout<<c[i]<<"x^"<<i;
				l++;
				if(l<9){
				    cout<<"+";
				}
			}
		}		
    return 0;
}
