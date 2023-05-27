class Solution {
public:
    int reverse(int x) {


        int a,b;
        long rev_num=0;
        int i=0;
        long MIN = - (pow(2,31));
        long MAX = (pow(2,31)-1);
       
        
        
        while(x!=0){
            a = x/10;
            b = x%10;
            if ((rev_num*10)<MAX && (rev_num*10)>MIN){

            rev_num = (rev_num*10) + b;
            
            x = a;
            i++;
            }
            else{ 
                return 0;
            }
           
        }
        int answer = rev_num;
        return rev_num;
    
        
    }
};
