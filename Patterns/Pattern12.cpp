#include<iostream>
using namespace std;
int  main(){
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			cout<<" ";
		for(k=(n-i)*2-1;k>0;k--)
			cout<<"*";
		
	cout<<"\n";
	}
	return 0;
}
