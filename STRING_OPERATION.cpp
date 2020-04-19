#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>



int main()
{
	
	char s1[20],s2[20],s3[20],s4[20];
	int i,j,l1,l2;
	
	
	cout<<"\n Enter the first string->";
	gets(s1);
	cout<<endl;
	cout<<"\n Enter the second string->";
	gets(s2);
	

	for(i=0;s1[i]!=NULL;i++)
	{
		l1++;
	}
	cout<<"\n first string Length is->"<<l1;
	cout<<"\n";
	for(i=0;s2[i]!=NULL;i++)
	{
		l2++;
	}
	cout<<"\n first string Length is->"<<l2;

	cout<<"\n   COPY_STRING   ";
	
	for(i=0;s1[i]!=NULL;i++)
	{
		s3[i]=s1[i];
	}
	for(i=0;s2[i]!=NULL;i++)
    {
       s4[i]=s2[i];    	
	}
	cout<<"\n String s3 is->"<<s3;
	cout<<"\n";
	cout<<"\n Sting s4 is->"<<s4;

	char temp;
	cout<<"\n REVERSE STRING IS->";
	for(i=0,j=l1-1;i<l1/2;j--,i++)
	{
	    temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
    }
	cout<<"\n\n REVERSE S1 IS->"<<s1; 
    cout<<"\n Concatnation the two string without libray function ->";
     
	 
	  	  
	return 0;
}
