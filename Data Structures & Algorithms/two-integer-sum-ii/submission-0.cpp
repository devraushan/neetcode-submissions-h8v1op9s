class Solution {
    int binsearch(vector<int> & a,int k){
        int start = 0,end = a.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(a[mid]==k) return mid;
            if(a[mid]<k) start = mid+1;
            if(a[mid]>k) end = mid-1;
        }
        return -1;
    }
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0;i<n;++i){
            int diff = target-numbers[i];
            if(diff==numbers[i]){
                if(i==n-1) continue;
                if(numbers[i]==numbers[i+1]) return {i+1,i+2};
                continue;
            }
            auto val = binsearch(numbers,diff);
            if(val!=-1){
                return {i+1,val+1};
            }
            
        }
    }
};
