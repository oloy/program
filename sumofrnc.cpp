#include<iostream>
using namespace std;
int main(){
	int i,j,k,l,r[10],c[10],a[10][10],m,n;
	cout<<"Enter the size of row and column\n";
	cin>>m>>n;
	cout<<"Now enter the element of matrix\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Enter element of order ("<<i<<"*"<<j<<")";
			cin>>a[i][j];
			r[i]=0;
			c[j]=0;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			k=i;
			l=j;
			if(i==k)
				r[i]+=a[i][j];
			if(j==l)
				c[j]+=a[i][j];
		}
	}
	for(i=0;i<3;i++){
		cout<<"Sum of row no."<<i+1<<" is "<<r[i]<<"\n";
		cout<<"Sum of column no."<<i+1<<" is "<<c[i]<<"\n\n";
	}
}
