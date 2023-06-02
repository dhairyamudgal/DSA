int isPossible(vector<int> &stalls, int k, int mid, int size){
    int cowsCount = 1;
    int pos = stalls[0];


    for(int i=0;i<size;i++){
        if(stalls[i] - pos >= mid){
            cowsCount++;
            if(cowsCount==k){
                return true;
            }

            else{
                pos = stalls[i];
            }



        }
    }

    return false;
}


int aggressiveCows(vector<int> &stalls, int k) {
  int s = 0;
  int size = stalls.size();
  int max = 0;

  int ans = -1;

  sort(stalls.begin(), stalls.end());
  for (int i = 0; i < size; i++){
    if (stalls[i] > max) {
        max = stalls[i];
    }
  }

    int e = max;
    int mid = s + (e-s)/2;

  while(s<=e){
      if(isPossible(stalls, k, mid, size)){
          s = mid + 1;
          ans = mid;

      }

      else{
          e = mid - 1;
      }

    mid = s + (e-s)/2;
  }

  return ans;
}

