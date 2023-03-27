
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
     
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> mem(m, vector<int>(n, grid[0][0]));
        
        //for row
        
        for(int i=1;i<m;i++){
            mem[i][0]=grid[i][0]+mem[i-1][0];
        }
        
        //for col
        for(int j=1;j<n;j++){
            mem[0][j]=grid[0][j]+mem[0][j-1];
        }
        
        //for inner elements
       
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                //size of rows and cols are equal as its a square matrix
                mem[i][j]=grid[i][j]+min(mem[i-1][j],mem[i][j-1]);
            }
        }
        return mem[m-1][n-1];
    }
};