#include<iostream>
using namespace std;




int main(){
	int a[3][3],n,i,j,k;
	cout<<"\n Enter the Elements of The matrix(most of zero's)->";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n ROWS COLUMNS VALUE";
	int row,col,flag;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]!=0){
				flag=1;
				break;
			}
			else{
				flag=0;
		    }
		}
	}
	if(flag==1){
		row++;
	}
	cout<<"\n "<<row;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[j][i]!=0){
				flag=1;
				break;
			}
			else{
				flag=0;
		    }
		}
	}
	if(flag==1){
		col++;
	}
	cout<<"\n "<<row;
	
	return 0;
}
