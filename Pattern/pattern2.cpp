#include<iostream>
using namespace std;

int main(){
	int i,j,r;
	cout<<"Enter no.of rows";
	cin>>r;

	for(i=1;i<=r;i++){
		for(j=1;j<=r;j++){
			cout<<i<<" ";
			
		}

		cout<<endl;
		
	}

	cout<<endl;
	cout<<"END";
	cout<<endl;
	
	i=1;
	while(i<=r){
		j=1;
		while(j<=r){
			cout<<i<<" ";
			j+=1;

		}
		cout<<endl;
		i+=1;
	}
}