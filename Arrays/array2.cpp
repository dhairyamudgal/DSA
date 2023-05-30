#include<iostream>
using namespace std;

void search( int arr[], int size, int element){
	int n=0;
	while(n<size){
		if(arr[n]==element){
			cout<<"Element is present in array";
			exit(0);
		}
		n++;
	}
	cout<<"Element is not present in array";

}

int main(){
	
	cout<<"Enter size of array\n";
	int size;
	cin>>size;
	int a[size];
	cout<<"Enter array elements \n";
	for (int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"\nEnter element to search\n";
	int element;
	cin>>element;

	search(a,size,element);


}
