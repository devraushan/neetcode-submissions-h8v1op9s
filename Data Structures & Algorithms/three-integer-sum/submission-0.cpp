class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> soln;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n-1;++i){
            int l = i+1,r = n-1;
            while(l<r){
                int sum = nums[l]+nums[r]+nums[i];
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[l]);
                v.push_back(nums[r]);
                if(sum==0){
                    soln.insert(v);
                    l++;
                    r--;
                }
                else if(sum<0) l++;
                else r--;
            }
        }
        vector<vector<int>> ans;
        for(auto i:soln) ans.push_back(i);
        return ans;
    }
};
