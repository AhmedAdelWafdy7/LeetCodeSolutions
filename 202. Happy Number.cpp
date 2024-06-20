class Solution {
public:
    bool isHappy(int n) {
        int sum {0};
    while(n != 1){
        while(n != 0){
            sum += pow(n%10, 2);
            n /= 10;
        }
        if(sum == 1){
            return true;
        }
        if(sum == 4){
            return false;
        }
        n = sum;
        sum = 0;
    }
    return true;
    }
};
