class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;

        
        sort(people.begin(), people.end()); 
        int j =0;
        for(int i = people.size() - 1; i >= 0 && j <= i; i--) { 
            if(people[j] + people[i] <= limit) j++;
            
            
            boats++;
        }

        return boats;
    }
};