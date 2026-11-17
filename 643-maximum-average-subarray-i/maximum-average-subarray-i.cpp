class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0 ,end = 0;
        double max_avg = INT_MIN , curr_sum = 0.0;
        while(end < nums.size())
        {
            curr_sum += nums[end];
            if(end - start + 1 == k)
            {
                double avg = curr_sum / k;
                max_avg = max(max_avg , avg);
                curr_sum -= nums[start];
                start++;
            }
            end++;
        }
        return max_avg;
    }
};