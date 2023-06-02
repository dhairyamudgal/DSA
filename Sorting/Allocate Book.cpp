 bool isPossible(vector<int>& arr, int n, int m, int mid){
    int usercount = 1;
    int userpages = 0;
    
   
    if(m>n){
        return false;
    }
    else{
    for(int i=0;i<n;i++){
      if (userpages + arr[i] <= mid) {
        userpages = userpages + arr[i];
      }

      else {
        usercount++;
        if(usercount>m || arr[i]>mid){
            return false;
        }
        
        userpages = arr[i];
      }
      if (usercount > m) {
        return false;
      }
    }
    }
    
    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}

	int e = sum;
	int mid = s + (e-s)/2;
	while(s<=e){

        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid -1;

        } else {
          s = mid + 1;
        }
        mid = s + (e-s)/2;
        }

        return ans;
}

