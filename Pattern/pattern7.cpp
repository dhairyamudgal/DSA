#include<iostream>
using namespace std;

int main(){
	int i,j,space,r;
	cin>>r;
	i= 1;
	while (i<=r){
		space = r-i;
		while(space){
			cout<<" ";
			space -=1;
		}

	j = 1;
	while(j<=i){
		cout<<j<<" ";
		j+=1;
	}

	j=i-1;
	while(j>=1){
		cout<<j<<" ";
		j-=1;
	}

	cout<<endl;
	i+=1;
	}



}