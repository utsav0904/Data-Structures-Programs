#include<iostream>
using namespace std;
#include<stdlib.h>
#define MAX 5

int main()
{
	int a[MAX],b[MAX],i;
	cout<<"\n Enter the elements of First array->";
	for(i=0;i<MAX;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<MAX;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<"\n";
	cout<<"\n Enter the elements of Second array->";
	for(i=0;i<MAX;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<MAX;i++)
	{
		cout<<" "<<b[i];
	}
	int count=0;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==b[i])
		{
			count++;
		}
		else{
			continue;
		}
	}
		int c[MAX],d[MAX];
	if(count==5){
		cout<<"\n TWO array are same";
	}
	else{
		for(i=0;i<MAX;i++)
		{
			c[i]=a[i];
			d[i]=b[i];
		}
	for(i=0;i<MAX;i++)
	{
		cout<<" "<<c[i];
	}
	cout<<"---";
	for(i=0;i<MAX;i++)
	{
		cout<<" "<<d[i];
	}
    }
	return 0;
}
