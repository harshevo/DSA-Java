class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
      sort(potions.begin(),potions.end());
    
        int n = spells.size();
        int m = potions.size();
        
        vector<int> sarr(n,0);
        
        for(int i=0;i<n;i++){
            
            int s = 0;
            int e = m-1;
            
            while(s<=e){
                
                int mid = s+(e-s)/2;
                
                long long product = (long long) spells[i] * (long long)potions[mid];
                
                if(product >= success){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
                
           } 
            sarr[i] = m-s;
        }
        return sarr;
        
    }
};