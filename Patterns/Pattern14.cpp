/*#include<iostream>
using namespace std;
int  main(){
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n/2+1;i++){
		for(j=0;j<n/2-i;j++)
			cout<<" ";
		for(j=0;j<i+1;j++)
			cout<<"* ";
	cout<<"\n";
	}
	for(i=1;i<n/2+1;i++){
		for(j=0;j<i;j++)
			cout<<" ";
		for(k=0;k<n/2+1-j;k++)
			cout<<"* ";
	cout<<"\n";
	}
	return 0;
}*/

/*Without spaces*/

#include<iostream>
using namespace std;
int  main(){
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n/2+1;i++){
		for(j=0;j<n/2-i;j++)
			cout<<" ";
		for(k=i*2+1;k>0;k--)
			cout<<"*";	
	cout<<"\n";
	}
	for(i=0;i<n/2;i++){
		for(j=0;j<i+1;j++)
			cout<<" ";
		for(k=(n/2-i)*2-1;k>0;k--)
			cout<<"*";	
	cout<<"\n";
	}
	return 0;
}


