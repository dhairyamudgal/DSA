void pushZerosAtEnd(vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    
    // Count the number of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    
    // Fill the remaining elements with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}