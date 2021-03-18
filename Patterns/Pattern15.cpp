#include<iostream>
using namespace std;
int  main(){
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n/2+1;i++){
		for(j=0;j<n/2-i;j++)
			cout<<" ";
		for(k=1;k<=(i*2)+1;k++)
			cout<<k;	
	cout<<"\n";
	}
	for(i=0;i<n/2;i++){
		for(j=0;j<i+1;j++)
			cout<<" ";
		for(k=1;k<=(n/2-i)*2-1;k++)
			cout<<k;	
	cout<<"\n";
	}
	return 0;
}

