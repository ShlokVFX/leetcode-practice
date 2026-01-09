class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        Prefix sum + hashmap approach
        */
        int res = 0;
        int sum = 0;

        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1; // base case: empty prefix sum

        for (int num : nums) {
            sum += num;                 // update running prefix sum

            // if (sum - k) existed before,
            // subarray ending here has sum = k
            res += prefixSum[sum - k];

            // store current prefix sum frequency
            prefixSum[sum]++;
        }

        return res;
    }
};
