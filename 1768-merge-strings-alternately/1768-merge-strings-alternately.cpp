class Solution {
public: 
    string mergeAlternately(string s1, string s2) {
    
        int ls1 = s1.length(); // length of s1
        int ls2 = s2.length();
        
        string ans = "";
        
        string sub1;
        string sub2;
        
        if(ls1 >= ls2){
            sub1 = s1.substr(ls2);
            
            for(int i = 0; i < ls2; i++){

                ans.push_back(s1[i]);
                ans.push_back(s2[i]);
                
            }
            ans += s1.substr(ls2);
        }
        
        if(ls2 > ls1){
            sub2 = s2.substr(ls1);
            for(int i = 0; i < ls1; i++){

                ans.push_back(s1[i]);
                ans.push_back(s2[i]);
                
            }
            ans += s2.substr(ls1);
           
            
        }

        
        return ans;
        
    }
};