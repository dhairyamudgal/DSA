class Solution {
public:
    bool isPowerOfTwo(int n) {

        long m =n;
        long c = 0;

         if (m==1){
            return true;
        }

        if (m==3){
            return false;
        }
        if(m<=0){
            return false;
        }
        while(n!=0){
            if(n&1){
                c = c+1;

            }
            n = n>>1;
            
        }

    
        if(m%2==0){
            if(c==1){
                return true;
            }
        }

        
        return 0;
    }
    
};