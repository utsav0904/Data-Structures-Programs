#include<iostream>
using namespace std;

void merge(int A[],int,int,int temp[],int,int,int c[],int);
void merge_sort(int A[],int);
void mergepass(int A[],int,int,int temp[]);

int main(){
    int i,j,k;
    int a[]={77,-8,2,4,0,-3,12,-8,-11};
	
	merge_sort(a,9);
	
	for(i=0;i<9;i++){
		cout<<" "<<a[i];
	}
	return 0;
}
void merge_sort(int A[],int N){
	int l=1,temp[9];
	
	while(l<N){
		mergepass(A,N,l,temp);
		mergepass(temp,N,2*l,A);
	}
}
void mergepass(int A[],int N,int l,int temp[]){
	
	int j,lb,Q,S,R;
	Q=N/(2*l);
	S=2*l*Q;
	R=N-S;
	
	for(j=0;j<Q;j++){
		lb=(2*j)*l;
		merge(A,l,lb,temp,l,lb+l,temp,lb);
	}
	
	if(R<=l){
		for(j=0;j<R;j++){
			temp[S+j]=A[S+j];
		}
	}
	else{
		merge(A,l,S,A,R-l,S+l,temp,S);
	}
}
void merge(int A[],int n1,int index1,int temp[],int n2,int index2,int c[],int index){
	
	while(n1 && n2){
		if(A[index1]<temp[index2]){
			c[index]=A[index1];
			index++;
			index1++;
			n1--;
		}
		else{
			c[index]=temp[index2];
			index++;
			index2++;
			n2--;
		}
	}
	
	while(n1){
		c[index]=A[index1];
		index++;
		index1++;
		n1--;
	}
	
	while(n2){
		c[index]=temp[index2];
			index++;
			index2++;
			n2--;
	}
}
