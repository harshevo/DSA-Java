
class Solution {
public:
    
    int maxPath = 0;
    void solve(TreeNode* root, int steps, bool pathLeft){
        if(root == NULL){
            return;
        }
        
        maxPath = max(maxPath,steps);
        
        if(pathLeft){
            solve(root->left, steps+1, false); // pathleft set to false as we need to go right to form a zigzag pattern
            solve(root->right, 1, true);
        }
        else{
            solve(root->right, steps+1, true);
            solve(root->left, 1 , false);
        }
        
    }
    
    int longestZigZag(TreeNode* root) {
         solve(root, 0, true);
         solve(root, 0, false);
        return maxPath;
    }
};