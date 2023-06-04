
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                // int temp2 = arr[j+1];
                arr[j+1] = arr[j];
                // arr[i] = temp2;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}