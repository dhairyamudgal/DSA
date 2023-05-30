#include<iostream>
using namespace std;


void rev(int arr[], int size){
	int start = 0,test;
	int end = size -1;
	while(start<end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

void rev1(int arr[], int size){
	int n=size-1;
	while(n>=0){
		cout<<arr[n]<<" ";
		n--;
	}
}


int main(){

	int num;
	cout<<"Enter number of elements\n";
	cin>>num;

	int arr[num];
	cout<<"Enter elements of array\n";
	for(int i=0;i<num; i++){
		cin>>arr[i];
	}

	
	rev1(arr,num);
	rev(arr,num);

}