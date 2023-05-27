#include<iostream>
using namespace std;

int main(){
	int i,j,r,x,y,a,stars;
	cin>>r;

	i=1;

	while(i<=r){
	j=1;
	while(j<=r-i+1){
		cout<<j<<" ";
		j +=1;
	}



	x=i;
		stars = 2 * (x-1);
		while(stars>0){
			cout<<"* ";
			stars -=1;
		}
	

	y=r-i+1;
	while(y>=1){
		cout<<y<<" ";
		y-=1;
	}

	i+=1;
	cout<<endl;
	}
}