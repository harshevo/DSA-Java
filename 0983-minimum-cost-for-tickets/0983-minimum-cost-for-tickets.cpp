class Solution {
public:
    
    int t[366];
     
    int solve(int i,int n,vector<int>& days, vector<int>& costs){
        if(i>=n){
            return 0; //base case
        }
        
        if(t[i] != -1){
            return t[i];
        }
        
        //for 1 day
        int cost1 = costs[0]+solve(i+1,n, days,costs);
                       
        // for 7 day
        int max_day = days[i]+7;
        int j =i;
        while(j<n && days[j]<max_day){
            j++;
        }
        int cost2 = costs[1]+solve(j,n, days,  costs);
        
        //for 30 day
        j=i;
        max_day = days[i]+30;
        while(j<n &&days[j]<max_day){
            j++;
            
        }
        int cost3 = costs[2]+solve(j,n, days,  costs);
        
        return t[i]=min(min(cost1,cost2),cost3);
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        memset(t,-1,sizeof(t));
       int ans =  solve(0,n,days,costs);
        return ans;
    }

    
  
};