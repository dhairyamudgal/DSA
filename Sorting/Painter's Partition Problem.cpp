

bool isPossible(vector<int> &boards, int k, int mid,int size){


    int painterCount = 1;
    int boardLength = 0;

    for(int i = 0; i<size; i++) {
        if(boardLength + boards[i] <= mid) {
            boardLength += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid ) {
            return false;
        }
            boardLength = boards[i];
        }
        if(painterCount > k) {
            return false;
        }
    }

    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int size = boards.size();
    int sum = 0;
    int ans = -1;

    
    for(int i=0;i<size;i++){
        sum = sum + boards[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    while(s<=e){

        if(isPossible(boards, k, mid,size)){
            e = mid -1;
            ans = mid;
        }

        else{
            s = mid +1;
        }

        mid = s + (e-s)/2;

    }

    return ans;
}

