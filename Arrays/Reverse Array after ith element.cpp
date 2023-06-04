#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int size = arr.size();
	int a = m + 1;
	int b = size - 1;

	while(a<=b){
		swap(arr[a],arr[b]);
		a++;
		b--;
		
	}
}