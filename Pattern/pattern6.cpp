#include<iostream>
using namespace std;

int main(){
	int i,j,z,r;
	cin>>r;
	i=1;
	while(i<=r){
		z=1;
		j=1;
		while(j<=r-i){
			cout<<" ";
			j+=1;
		}
		
		
		while(j-1<r){
			cout<<"*";
			j+=1;
		}

	
		cout<<endl;
		i+=1;
	}

}