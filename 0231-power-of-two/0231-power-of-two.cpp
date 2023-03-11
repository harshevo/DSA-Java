class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n&(n-1LL)){
            return false;
        }
        else{
            return true;
        }
    }
};