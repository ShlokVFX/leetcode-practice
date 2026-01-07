class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.count(diff))
                return {mp[diff] , i};
            else
                mp[nums[i]] = i;
        }
        return {};
    }
};
/*
Optimal Two Sum Soln that uses Hashmap:

Time Complexity : 0(1)
Space Complexity : 0(1)
*/