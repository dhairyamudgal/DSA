#include<iostream>
using namespace std;

int main(){

	int i,j,n;
	cin>>n;

	
	i=1;
	while(i<=n){
		char start = 'A' + n -i;
		j=1;
		while(j<=i){
			char new_start = start + j -1;
			cout<<new_start<<" ";
			j+=1;
		}

		i+=1;
		cout<<endl;
	}
}