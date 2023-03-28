class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int h = matrix.size();
        if(h==0 || matrix[0].empty()){
            return 0;
        }
        int w = matrix[0].size();
        
        
        vector<vector<int>> dp(h,vector<int>(w));
        int answer=0;
        
        for(int row =0;row<h;++row){
            for(int col=0;col<w;++col){
                if(matrix[row][col] == '1'){
                    dp[row][col] = 1;
                    if(row>0 && col>0){
                        dp[row][col] += min({dp[row-1][col],dp[row][col-1],dp[row-1][col-1]});
                    }
                    answer = max(answer,dp[row][col]);
                }
            }   
        }
        return answer*answer;
        
    }
};