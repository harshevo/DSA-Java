class Solution {
public:
    
    int memo[501][501];
    
    int ltc(int i,int t,int n,vector<int> &satis){
      
            if(i==n){
                return 0;
            }
        if(memo[i][t]!=-1){
            return memo[i][t];
        }
        int include = satis[i]*t+ltc(i+1,t+1,n,satis);
        int exclude = ltc(i+1,t,n,satis);
        
        return memo[i][t] = max(include,exclude);
        
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        memset(memo,-1,sizeof(memo));
        int ans = ltc(0,1,n,satisfaction);
        return ans;
    }
};