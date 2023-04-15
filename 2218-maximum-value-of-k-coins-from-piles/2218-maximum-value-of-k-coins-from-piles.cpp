class Solution {
public:
    int length;
    
    //with recursion TLE
    //with recursion with memo : accepted
    
    int dp[1001][2001];
    
    int solve(int i,vector<vector<int>>& piles,int k){
        
        if(i>=length){
            return 0;
        }
        
        if(dp[i][k] != -1){
            return dp[i][k]; 
        }
        
        int notTaken = solve(i+1,piles,k); //if the pile is not taken then we'll move to next pile
        
        int taken = 0; 
        
        int sum = 0;
        
        
        for(int j=0; j < min((int)piles[i].size(),k); j++){
            
            sum += piles[i][j]; //iterate through the pile and add the value to the sum
          
            taken = max(taken , sum + solve(i+1,piles,k-(j+1))); //set the value of taken with the max value
             
            /*for example , the value of k is 2 , to get the max value we need to iterate through the pile and add the coin and decrease
                the value of k , as it shows that coin is taken 
            */
                
        }
        
        return dp[i][k] = max(taken,notTaken);
        
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
       
       length = piles.size();
        
        memset(dp,-1,sizeof(dp));//set the value of dp elements to -1
        
       return solve(0,piles,k);
    }
};