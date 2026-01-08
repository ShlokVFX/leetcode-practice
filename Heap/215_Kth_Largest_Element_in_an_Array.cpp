class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*
        Heap / priority queue to avoid sorting
        Because Smallest element appears on top
        */
        priority_queue<int , vector<int> , greater<int>> dq;
        for(int num : nums){
            dq.push(num); //add all the nums in heap
            if(dq.size() > k) {
                dq.pop();
            }
        }
        return dq.top();
        
    }
};