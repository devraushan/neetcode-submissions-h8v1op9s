class Solution {
public:
    int maxProfit(vector<int>& prices) {
        multiset<int> st;
        for(auto i:prices) st.insert(i);
        int maxprof = 0;
        for(int i = 0;i<prices.size()-1;++i){
            st.erase(st.find(prices[i]));
            maxprof = max(maxprof,*(st.rbegin())- prices[i]);
        }
        return maxprof;
    }
};
