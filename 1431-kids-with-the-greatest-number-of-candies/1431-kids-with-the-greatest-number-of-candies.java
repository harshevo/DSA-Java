class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int[] ans = new int[candies.length];
        List<Boolean> ans2 = new ArrayList<>();
       
        int max = 0;
       
        
        for(int i = 0; i<candies.length;i++){
            ans[i] = candies[i] + extraCandies;
            if(max<candies[i] ){
                max = candies[i];
            }
        }
        
       
        for(int i =0; i < candies.length ; i++){
            if(ans[i] >= max){
                
                ans2.add(true);
            }
            else{
                ans2.add(false);
            }
        }
        
        
        return ans2;
        
    }
}