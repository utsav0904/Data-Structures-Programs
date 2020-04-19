#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 5

  
int main()
{
	int a[MAX],i,n;
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
	int j;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==n)
		{
		  for(j=i;j<MAX;j++)
		  {
		  	a[j]=a[j+1];
			  }	
		}
		else{
			continue;
		}
	}
	for(i=0;i<MAX-1;i++)
	{
		cout<<" "<<a[i];
	}
	
	return 0;
}
