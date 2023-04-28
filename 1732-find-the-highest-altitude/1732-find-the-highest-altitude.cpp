class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int highestAltitude = 0;
        int sum = 0;
        
        for(int i = 0; i<gain.size(); i++){
            sum += gain[i];
        
            if(sum > highestAltitude){
                
                highestAltitude=sum;
                
            }    
                
        }
        return highestAltitude;
        
    }
};