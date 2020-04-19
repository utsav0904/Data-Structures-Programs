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
	
	for(i=0;i<MAX;i++)
	{
		if(a[i]==n)
		{
			cout<<"\n AN Element ("<< a[i]<< ") found at ->"<< i;
		}
	}
	
	return 0;
}
