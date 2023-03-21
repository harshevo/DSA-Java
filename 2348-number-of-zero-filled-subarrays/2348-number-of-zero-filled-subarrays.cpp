class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ct=0;
        int i;
        long long ansSubarr=0;
            //2+(2*ct-2)*2;//calculated when zeroes are found continuously//we can use this formula with some minor changes in code
        
        
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