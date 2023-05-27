class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int a,b;

        while(n!=0){
            a = n/10;
            b = n%10;
            prod = prod * b;
            sum = sum +b;
            n = a;

        }

        int answer = prod - sum;
        return answer;
    }
};