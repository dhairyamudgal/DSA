#include<iostream>
using namespace std;

int main(){
	
	int r,i,j;
	cout<<"Enter rows";
	cin>>r;
	
	i=1;
	
	while (i<=r){
		j=1;
		while(j<=i){
			cout<<"*";
			j += 1;
		}
		i += 1;
		cout<<endl;
	}

	i=1;
	
	while (i<=r){
		j=i;
		while(j>=1){
			cout<<j<<" ";
			j -= 1;
		}
		i += 1;
		cout<<endl;
	}


}
