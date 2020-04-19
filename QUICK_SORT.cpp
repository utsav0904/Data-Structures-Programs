#include<iostream>
using namespace std;
#include<stdlib.h>

void quick(int a[],int n,int beg,int end,int *pivot){
	int left,right,temp;
	left=beg;
	right=end;
	*pivot=beg;
	
step2:	
	while((a[*pivot]<=a[right]) && *pivot!=right){
		right--;
	}
	if(*pivot==right){
		return;
	}
	if(a[*pivot]>a[right]){
		temp=a[*pivot];
		a[*pivot]=a[right];
		a[right]=temp;
		*pivot=right;
	}
	goto step3;
step3:
	while((a[left]<=a[*pivot]) && left!=*pivot){
		left++;
	}
	if(*pivot==left){
		return;
	}
	if(a[*pivot]<a[left]){
		temp=a[left];
		a[left]=a[*pivot];
		a[*pivot]=temp;
		*pivot=left;
	}
	goto step2;
}
void quick_sort(int a[],int n){
	int top=-1,pivot,beg,end;
	int lower[10],upper[10];
	if(n>1){
		top++;
		lower[top]=0;
		upper[top]=n-1;
	}
	while(top!=1){
		beg=lower[top];
		end=upper[top];
		top--;
		quick(a,n,beg,end,&pivot);
		if(beg<pivot-1){
			top++;
			lower[top]=beg;
			upper[top]=pivot-1;
		}
		if(pivot+1<end){
			top++;
			lower[top]=pivot+1;
			upper[top]=end;
		}
	}
}

int main()
{
	int i,j,k;
	int a[]={666,999,333,777,444,111,555,888,222};
	quick_sort(a,9);
	cout<<"\n **QUICK SORTING**"<<endl<<endl;
	for(i=0;i<9;i++){
		cout<<" "<<a[i];
	}
	return 0;
}
