class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = *prices.rbegin();
        int maxprof = 0;
        for(int i = prices.size()-2;i>=0;--i){
            maxprof = max(maxprof,maxi- prices[i]);
            maxi = max(maxi,prices[i]);
        }
        return maxprof;
    }
};
