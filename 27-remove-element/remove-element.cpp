class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        for (int l = 0; l < nums.size(); l++) {
            if (nums[l] != val) {
                nums[c] = nums[l];
                c++;
            }
        }
        return c;
    }
};