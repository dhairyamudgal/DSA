#include <bits/stdc++.h>
#include<algorithm>



vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i=0;
    int j=0;
    vector <int> merged;
    
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    
    // Append remaining elements from arr1, if any
    while (i < m) {
        merged.push_back(arr1[i]);
        i++;
    }
    
    // Append remaining elements from arr2, if any
    while (j < n) {
      merged.push_back(arr2[j]);
      j++;
    }

    return merged;
}

