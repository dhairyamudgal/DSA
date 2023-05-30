#include<iostream>
using namespace std;

int maxNum( int arr[], int size){
	int Max = arr[0];
	int n= 0;
	while(n<size){
		if(arr[n]>Max){
			Max = arr[n];
		}
		n++;
	}

	return Max;
}

int minNum (int arr[], int size){
	int Min = arr[0];
	int n= 0;
	while(n<size){
		if(arr[n]<Min){
			Min = arr[n];
		}
		n++;
	}

	return Min;
}

int sumOf (int arr[], int size){
	int sum = 0;
	int n =0;
	while(n<size){
		sum = sum + arr[n];
		n+=1;
	}

	return sum;
}

int main(){
	
	
	int a[4]={4,12,8,10};
	cout<<"Maximum integer"<<maxNum(a, 4)<<"\n";
	cout<<"Minimum integer"<<minNum(a, 4)<<"\n";
	cout<<"Sum "<<sumOf(a, 4);


}
