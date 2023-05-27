#include<iostream>
using namespace std;

// Pattern:
int main(){
	int i,j,r;
	cout<<"Enter no.of rows";
	cin>>r;

	for(i=1;i<=r;i++){
		for(j=r;j>=1;j--){
			cout<<j<<" ";
			
		}
		cout<<endl;

		
	}

	cout<<endl;
	cout<<"END";
	cout<<endl;
	
	// Pattern:
	i=1;
	while(i<=r){
		j=1;
		while(j<=r){
			cout<<j<<" ";
			j+=1;

		}
		cout<<endl;
		i+=1;
	}

//  Pattern:
	cout<<endl;
	cout<<"END";
	cout<<endl;
	i=1;
	int a=1;
	while(i<=r){
		
		j=1;
		while(j<=r){
			cout<<a<<" ";
			j+=1;
			a+=1;

		}
		cout<<endl;
		i+=1;
	}

}