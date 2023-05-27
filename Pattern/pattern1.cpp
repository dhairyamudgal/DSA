#include<iostream>
using namespace std;

int main(){
	
	int r,i,j;
	cout<<"Enter rows";
	cin>>r;

	for(i=1;i<=r;i++){
		for(j=1;j<=r;j++){
			cout<<"*";
		}

		cout<<endl;
		
	}


	cout<<endl;
	cout<<"END";
	cout<<endl;
	
	i=1;
	
	while (i<=r){
		j=1;
		while(j<=r){
			cout<<"*";
			j += 1;
		}
		i += 1;
		cout<<endl;
	}

}
