class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sum = 0;
        for(int i =0; i<distance.size();i++){
            sum += distance[i];
        }
        int sum1=0;
        if(start>destination){
            swap(start,destination);
        }
        for(int i =start;i<destination;i++){
            sum1+=distance[i];
        }
        int sumMin = sum-sum1;
        return min(sum1,sumMin);
    }
};