class Solution {
public:
    
    int mem[26];
    
    int solve(string s){
        string ans ="";
        int count=0;
        
        
        for(int i=0;i<s.length();i++){
            mem[s[i]-97]++;
            if(mem[s[i]-97]==1){
                ans += s[i];
            }
            else{
                memset(mem,0,sizeof(mem));
                i = i-1;
                count++;
            }
        
    }
     return count+1;                
}
    
    int partitionString(string s) {
        memset(mem,0,sizeof(mem));
        return solve(s);
    }
};