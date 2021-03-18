#include<iostream>
using namespace std;
int  main(){
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			cout<<" ";
		for(k=1;k<=n-i;k++)
			cout<<k;
		
	cout<<"\n";
	}
	return 0;
}
