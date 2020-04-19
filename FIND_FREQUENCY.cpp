#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 5

 
int main()
{
	int a[MAX],i,n,temp=0,j;
	cout<<"\n Enter the elements of array->";
	for(i=0;i<MAX;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<MAX;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<"\n Enter the Element from array->";
	cin>>n;
	
	for(i=0;i<MAX;i++)
	{
		temp=0;
		for(j=i+1;j<MAX;j++)
		{
		   if(a[i]==a[j])
		   {
		       temp=temp+1;
		   }
		   else{ 
		       continue;
		   }
	    }
	    cout<<"\n element "<<a[i]<<" frequency is ->"<<temp;
	}
	return 0;
}
