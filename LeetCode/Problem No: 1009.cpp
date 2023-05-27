class Solution {
public:
    int bitwiseComplement(int n) {

        int mask =0;
        int m = ~n;
        if (n==0){
            return 1;
    
        }
        while(n!=0){
            n = n>>1;
            mask = (mask <<1)|1;
        }
        
        int answer = m & mask;
        return answer;
    }
};