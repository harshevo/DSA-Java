
class Solution {
public:
    
//     int maxPath = 0;
//     void solve(TreeNode* root, int steps, bool pathLeft){
//         if(root == NULL){
//             return;
//         }
        
//         maxPath = max(maxPath,steps);
        
//         if(pathLeft){
//             solve(root->left, steps+1, false); // pathleft set to false as we need to go right to form a zigzag pattern
//             solve(root->right, 1, true);
//         }
//         else{
//             solve(root->right, steps+1, true);
//             solve(root->left, 1 , false);
//         }
        
//     }
    
    //another code
    int maxPath1 = 0;
    void solve1(TreeNode* root, int l, int r){
        if(root == NULL){
            return;
        }
        maxPath1 = max({maxPath1, l, r});
        
        solve1(root->left, r+1 , 0);
        solve1(root->right, 0, l+1);
        
    }
    
    int longestZigZag(TreeNode* root) {
         solve1(root, 0, 0);
         
        return maxPath1;
    }
};