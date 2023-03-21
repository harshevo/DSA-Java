class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ct=0;
        int i;
        long long ansSubarr=0;


        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                ct++;
            }
            else if(nums[i]!=0){
                ansSubarr += ct * (ct+1) / 2;
                ct=0;
            }
 
        }
        ansSubarr += (ct * (ct+1) / 2);
        
        return ansSubarr;
    }
};