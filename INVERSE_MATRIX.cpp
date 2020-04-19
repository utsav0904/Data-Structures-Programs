#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 3

int main(){
	int a[3][3],i,j;
	float d=0.0;
	cout<<"\n Enter the Number of Element of 3*3 MATRIX ->";
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	for(i=0;i<MAX;i++){
		d=d+(a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3])-(a[0][i]*a[1][(i+2)%3]*a[2][(i+1)%3]);
	}
	cout<<" Determinate of the matrix is->"<<d;
	cout<<"\n";
	
	if(d==0){
		cout<<"\n Inverser Of Matrix is not Valid OK>>..";
	}
	else{
		for(i=0;i<MAX;i++){
            for(j=0;j<MAX;j++){
				cout<<" "<<(a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3]-a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3])/d;
			}
				cout<<"\n";			
		}
	}
	return 0;
}
