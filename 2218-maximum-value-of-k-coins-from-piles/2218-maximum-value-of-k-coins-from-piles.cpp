class Solution {
public:
    int length;
    
    int dp[1001][2001];
    
    int solve(int i,vector<vector<int>>& piles,int k){
        
        if(i>=length){
            return 0;
        }
        
        if(dp[i][k] != -1){
            return dp[i][k];
        }
        
        int notTaken = solve(i+1,piles,k);
        
        int taken = 0;
        
        int sum = 0;
        
        
        for(int j=0; j < min((int)piles[i].size(),k); j++){
            
            sum += piles[i][j];
          
            taken = max(taken , sum + solve(i+1,piles,k-(j+1)));
                
        }
        
        return dp[i][k] = max(taken,notTaken);
        
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
       
       length = piles.size();
        
        memset(dp,-1,sizeof(dp));
        
       return solve(0,piles,k);
    }
};